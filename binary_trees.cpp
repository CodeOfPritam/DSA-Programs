#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> &preOrder) // pass by reference
{
    idx++;

    if (idx >= preOrder.size() || preOrder[idx] == -1) // boundary check
    {
        return NULL;
    }

    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    return root;
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (root == NULL) return;

    queue<Node *> Q;
    Q.push(root);
    Q.push(NULL); // marker for end of level

    while (!Q.empty())
    {
        Node *curr = Q.front();
        Q.pop();

        if (curr == NULL)
        {
            cout << endl; // end of one level
            if (!Q.empty())
            {
                Q.push(NULL);
            }
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left != NULL)
            {
                Q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                Q.push(curr->right);
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    idx = -1; // reset before building
    Node *root = buildTree(arr);

    cout << "Pre order traversal of the BST is :" << endl;
    preOrder(root);
    cout << endl;

    cout << "In order traversal of the BST is :" << endl;
    inOrder(root);
    cout << endl;

    cout << "Post order traversal of the BST is :" << endl;
    postOrder(root);
    cout << endl;

    cout << "Level order traversal of the BST is :" << endl;
    levelOrder(root);
    return 0;
}
