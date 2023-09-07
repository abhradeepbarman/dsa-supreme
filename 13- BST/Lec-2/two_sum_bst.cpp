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
    void storeInorder(TreeNode* root, vector<int>& inorder) {
        //base case
        if(root == NULL) {
            return;
        }

        storeInorder(root->left, inorder);
        inorder.push_back(root->val);
        storeInorder(root->right, inorder);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        storeInorder(root, inorder);

        int s = 0;
        int e = inorder.size()-1;

        while(s < e) {
            int sum = inorder[s] + inorder[e];

            if(sum == k) {
                return true;
            }
            else if(sum < k) {
                s++;
            }
            else {
                e--;
            }
        }
        return false;
    }
};


int main()
{
    
    return 0;
}