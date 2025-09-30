#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
    if (root == NULL)
        return;

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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1;
}

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return leftCount + rightCount + 1;
}

int sumOfNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return leftSum + rightSum + root->data;
}

// Top view of a Binary Tree
void topView(Node *root)
{
    if (root == NULL) return;

    queue<pair<Node*, int>> q; // (node, HD)
    map<int, int> m;           // <HD, node val>

    q.push({root, 0});

    while (!q.empty())
    {
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if (m.find(currHD) == m.end()) {
            m[currHD] = curr->data;
        }

        if (curr->left != NULL) {
            q.push({curr->left, currHD - 1});
        }

        if (curr->right != NULL) {
            q.push({curr->right, currHD + 1});
        }
    }

    cout<<"Top view of the binary tree is :"<<endl;
    
    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

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

    cout << "Height of the tree is : " << height(root) << endl;

    cout << "Number of nodes in the tree is : " << countNodes(root) << endl;

    cout << "Sum of all modes of the tree is : " << sumOfNodes(root) << endl;

    topView(root);

    return 0;
}