#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
};

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node* root) {
        //base case
        if(root == NULL) {
            return 0; 
        }
        
        int leftSum = solve(root->left);
        int rightSum = solve(root->right);
        
        int old_val = root->data;
        root->data = leftSum + rightSum;
        
        return root->data + old_val;
    }
    
    void toSumTree(Node *node)
    {
        solve(node);
    }
};

int main()
{
    
    return 0;
}