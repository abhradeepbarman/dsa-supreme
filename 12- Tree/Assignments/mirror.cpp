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
    bool solve(TreeNode* p, TreeNode* q) {
        //base case
        if(p == NULL && q == NULL) {
            return true;
        }
        if((p != NULL && q == NULL) || (p == NULL && q != NULL)) {
            return false;
        }

        //check root
        bool rootAns = (p->val == q->val);

        //RE
        bool leftAns = solve(p->left, q->right);
        bool rightAns = solve(p->right, q->left);

        if(rootAns && leftAns && rightAns) {
            return true;
        }
        else {
            return false;
        }
    }

public:
    bool isSymmetric(TreeNode* root) {
        return solve(root->left, root->right);
    }
};

int main()
{
    
    return 0;
}