#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:
    void leftTraversal(Node* root, vector<int>& ans) {
        //base case
        if(root == NULL || (root->left == NULL && root->right == NULL)) {
            return;
        }
        
        //left data store
        ans.push_back(root->data);
        
        //RE
        if(root->left) {
            leftTraversal(root->left, ans);
        }
        else {
            leftTraversal(root->right, ans);
        }
    }
    
    void leafTraversal(Node* root, vector<int>& ans) {
        //base case
        if(root == NULL) {
            return;
        }
        
        //leaf node data store
        if(root->left == NULL && root->right == NULL) {
            //leaf node
            ans.push_back(root->data);
            return;
        }
        
        leafTraversal(root->left, ans);
        leafTraversal(root->right, ans);
    }

    void rightTraversal(Node* root, vector<int>& ans) {
        //base case
        if(root == NULL || (root->left == NULL && root->right == NULL)) {
            return;
        }
        
        //RE
        if(root->right) {
            rightTraversal(root->right, ans);
        }
        else {
            rightTraversal(root->left, ans);
        }
        
        //right part data store
        ans.push_back(root->data);
    }

    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        
        //edge case
        if(root == NULL) {
            return ans;
        }
        
        ans.push_back(root->data);
        
        //STEP 1: left part print
        leftTraversal(root->left, ans);
        
        //STEP 2: traverse Leaf nodes
            //left subtree
            leafTraversal(root->left, ans);
            
            //right subtree
            leafTraversal(root->right, ans);
        
        //STEP 3: tarverse right part
        rightTraversal(root->right, ans);
        
        return ans;
    }
};

int main()
{
    
    return 0;
}