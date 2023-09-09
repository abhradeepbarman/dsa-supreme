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
    TreeNode* build(int& i, int lb, int ub, vector<int>& preorder) {
        //base case
        if(i >= preorder.size()) {
            return NULL;
        }

        TreeNode* root = nullptr;
        if(preorder[i] < ub && preorder[i] > lb) {
            root = new TreeNode(preorder[i++]);
            root->left = build(i, lb, root->val, preorder);
            root->right = build(i, root->val, ub, preorder);
        }

        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int lb = INT_MIN, ub = INT_MAX;
        int i=0;

        return build(i, lb, ub, preorder);
    }
};

int main()
{
    
    return 0;
}