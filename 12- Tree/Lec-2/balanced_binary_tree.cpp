#include<bits/stdc++.h>
using namespace std;


//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
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
    bool isBalanced(TreeNode* root) {
        //base case
        if(root == NULL) {
            return true;
        }

        //1 case
        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        int diff = abs(leftHeight - rightHeight);

        bool rootAns = (diff <= 1);

        //RE
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if(rootAns && leftAns && rightAns) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    
    return 0;
}