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
    bool isSameTree(TreeNode* p, TreeNode* q) {
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
        bool leftAns = isSameTree(p->left, q->left);
        bool rightAns = isSameTree(p->right, q->right);

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