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
    TreeNode* createBST(vector<int>& nums, int s, int e) {
        //base case
        if(s > e) {
            return NULL;
        }

        int mid = s+(e-s)/2;
        
        //create Node
        TreeNode* root = new TreeNode(nums[mid]);

        //left
        root->left = createBST(nums,s,mid-1);

        //right
        root->right = createBST(nums,mid+1,e);

        return root;
    }

    void inorderTraverse(TreeNode* root, vector<int>& inorder) {
        if(root == NULL) {
            return;
        }

        inorderTraverse(root->left, inorder);
        inorder.push_back(root->val);
        inorderTraverse(root->right, inorder);
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorder;
        inorderTraverse(root, inorder);

        //build balanced BST using inorder traversal
        int s = 0;
        int e = inorder.size()-1;
        return createBST(inorder, s, e);
    }
};

int main()
{
    
    return 0;
}