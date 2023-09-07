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
    bool solve(TreeNode* root, long long int lb, long long int ub) {
        //base case
        if(root == NULL) {
            return true;
        }

        bool rootAns = (root->val > lb && root->val < ub);
        
        bool leftAns = solve(root->left, lb, root->val);
        bool rightAns = solve(root->right, root->val, ub);
            
        return rootAns && leftAns && rightAns;
    }
    
public:
    bool isValidBST(TreeNode* root) {
        long long int lowerBound = LLONG_MIN;
        long long int upperBound = LLONG_MAX;
        
        return solve(root, lowerBound, upperBound);
    }
};

int main()
{
    
    return 0;
}