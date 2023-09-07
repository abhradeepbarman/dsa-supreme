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

class Solution {
    void solve(TreeNode* root, int& k, int& ans) {
        //base case
        if(root == NULL) {
            return;
        }

        //Inorder Traversal

        //left
        solve(root->left,k,ans);

        //root node process
        k--;
        if(k == 0) {
            ans = root->val;
        }

        //right
        solve(root->right,k,ans);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        solve(root,k,ans);
        
        return ans;
    }
};

int main()
{
    
    return 0;
}