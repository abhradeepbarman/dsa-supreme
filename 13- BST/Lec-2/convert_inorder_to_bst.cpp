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

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;

        TreeNode* root = createBST(nums,s,e);
        return root;
    }
};

int main()
{
    
    return 0;
}