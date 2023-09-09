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
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        //base case
        if(root == NULL) {
            return 0;
        }
        int ans = 0;

        bool wasInRange = false;
        if(root->val >= low && root->val <= high) {
            wasInRange = true;
            ans += root->val;
        }

        if(wasInRange) {
            ans += rangeSumBST(root->left, low, high) + 
                    rangeSumBST(root->right, low, high);
        }
        else if(root->val < low) {
            ans += rangeSumBST(root->right, low, high);
        }
        else {
            ans += rangeSumBST(root->left, low, high);
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}