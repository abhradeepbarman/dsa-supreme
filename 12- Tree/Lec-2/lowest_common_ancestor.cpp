#include<bits/stdc++.h>
using namespace std;


 //Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        //base case
        if(root == NULL) {
            return NULL;
        }

        //check for p and q
        if(root->val == p->val) {
            return p;
        }
        if(root->val == q->val) {
            return q;
        }

        //RE
        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

        
        if(leftAns == NULL && rightAns == NULL) {
            return NULL;
        }
        else if(leftAns != NULL && rightAns == NULL) {
            return leftAns;
        }
        else if(leftAns == NULL && rightAns != NULL) {
            return rightAns;
        }
        else {
            //leftAns != NULL && rightAns != NULL
            //we got our LCA -- so retur that node
            return root;
        }
    }
};

int main()
{
    
    return 0;
}