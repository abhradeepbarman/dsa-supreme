#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        //base case
        if(root == NULL) {
            return 0;
        }

        int lh = height(root->left);
        int rh = height(root->right);

        //diameter
        int currDiameter = lh + rh;
        diameter = max(diameter, currDiameter);

        return max(lh, rh) + 1;
    };

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};

int main()
{
    
    return 0;
}