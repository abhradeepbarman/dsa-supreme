#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution {
private:
    int maxDepth(TreeNode* root) {
        //base case
        if(root == NULL) {
            return 0;
        }

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        int ans = max(leftDepth, rightDepth) + 1;

        return ans;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        //base case
        if(root == NULL) {
            return 0;
        }

        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = maxDepth(root->left) + maxDepth(root->right);
        int ans = max(op1, max(op2, op3));

        return ans;
    }
};

int main()
{
    
    return 0;
}