#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 
class Solution {
    void solve(TreeNode* root, int targetSum, int currSum, vector<int>path, vector<vector<int>>& ans) {
        //base case
        if(root == NULL) {
            return;
        }

        //include curr node
        path.push_back(root->val);
        currSum += root->val;

        //leaf node
        if(root->left == NULL && root->right == NULL) {
            if(currSum == targetSum) {
                ans.push_back(path);
            }
            return;
        }

        //RE
        solve(root->left, targetSum, currSum, path, ans);
        solve(root->right, targetSum, currSum, path, ans);
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        int sum = 0;
        vector<int> path;

        solve(root, targetSum, sum, path, ans);
        return ans;
    }
};

int main()
{
    
    return 0;
}