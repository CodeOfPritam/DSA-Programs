#include <iostream>
#include <stack>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        val = data;
        left = right = NULL;
    }
};

class BSTIterator {
public:
    stack<TreeNode*> s;

    void getLeftNodes(TreeNode* root) {
        while (root != NULL) {
            s.push(root);
            root = root->left;
        }
    }

    BSTIterator(TreeNode* root) {
        getLeftNodes(root);
    }

    int next() {
        TreeNode* ans = s.top();
        s.pop();
        getLeftNodes(ans->right);
        return ans->val;
    }

    bool hasNext() {
        return !s.empty();
    }
};

int main() {
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    BSTIterator it(root);

    while (it.hasNext()) {
        cout << it.next() << " ";
    }

    return 0;
}
