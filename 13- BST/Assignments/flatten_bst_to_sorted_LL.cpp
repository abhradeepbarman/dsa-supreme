#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(TreeNode* root, TreeNode* &prev) {
    if(root == NULL) {
        return;
    }

    inorder(root->left, prev);

    prev->left = NULL;
    prev->right = root;
    prev = root;

    inorder(root->right, prev);
}

TreeNode* flatten(TreeNode* root)
{
    if(root == NULL) {
        return root;
    }

    TreeNode* dummy = new TreeNode(-1);
    TreeNode* prev = dummy;

    inorder(root, prev);
    prev->left = prev->right = NULL;

    root = dummy->right;
    return root;
}

int main()
{
    
    return 0;
}