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


//Method 2: using Mapping
class Solution {
public:
    void createMapping(unordered_map<int,int>& mpp, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++) {
            mpp[inorder[i]] = i;
        }
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& size, int& preIndex, int inorderStart, int inorderEnd, unordered_map<int,int>& mpp ) {

        //base case
        if(preIndex >= size || inorderStart > inorderEnd) {
            return NULL;
        }

        //STEP A : find the center element from preorder and its left and right tree fron inorder
        int element = preorder[preIndex++];
        TreeNode* root = new TreeNode(element);
        int pos = mpp[element];

        //STEP B : RE
        root->left = solve(preorder, inorder, size, preIndex, inorderStart, pos-1, mpp);
        root->right =  solve(preorder, inorder, size, preIndex, pos+1, inorderEnd, mpp);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        int preIndex = 0;
        int inorderStart = 0;
        int inorderEnd = inorder.size()-1;
        unordered_map<int,int> mpp;

        createMapping(mpp, inorder);

        return solve(preorder, inorder, size, preIndex, inorderStart, inorderEnd, mpp);
    }
};









//METHOD 1: without using Mapping
class Solution2 {
public:
    int findPos(vector<int>& inorder, int element) {
        for(int i=0; i<inorder.size(); i++) {
            if(inorder[i] == element) {
                return i;
            }
        }
        return -1;
    }


    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& size, int& preIndex, int inorderStart, int inorderEnd ) {

        //base case
        if(preIndex >= size || inorderStart > inorderEnd) {
            return NULL;
        }

        //STEP A : find the center element from preorder and its left and right tree fron inorder
        int element = preorder[preIndex++];
        TreeNode* root = new TreeNode(element);
        int pos = findPos(inorder,element); //optimization

        //STEP B : RE
        root->left = solve(preorder, inorder, size, preIndex, inorderStart, pos-1);
        root->right =  solve(preorder, inorder, size, preIndex, pos+1, inorderEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        int preIndex = 0;
        int inorderStart = 0;
        int inorderEnd = inorder.size()-1;

        return solve(preorder, inorder, size, preIndex, inorderStart, inorderEnd);
    }
};

int main()
{
    
    return 0;
}