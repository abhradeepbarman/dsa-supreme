#include<bits/stdc++.h>
using namespace std;

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
    int findPos(vector<int>& inorder, int element) {
        for(int i=0; i<inorder.size(); i++) {
            if(inorder[i] == element) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int& postIndex, int inorderStart, int inorderEnd) {

        //base case
        if(postIndex < 0 || inorderStart > inorderEnd) {
            return NULL;
        } 

        int element = postorder[postIndex];
        postIndex--;
        TreeNode* root = new TreeNode(element);
        int pos = findPos(inorder, element);
        
        //RE
        root->right = solve(inorder,postorder,postIndex,pos+1, inorderEnd);
        root->left = solve(inorder,postorder,postIndex,inorderStart, pos-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size()-1;
        int inorderStart = 0;
        int inorderEnd = inorder.size()-1;

        return solve(inorder,postorder,postIndex,inorderStart,inorderEnd);
    }
};

int main()
{
    
    return 0;
}