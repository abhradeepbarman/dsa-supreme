#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* left, * right;
}; 

class Solution {
  public:
  
    int solve(Node* node) {
        //base case
        if(node == NULL) {
            return 0;
        }
        
        int leftSum = solve(node->left);
        int rightSum = solve(node->right);
        int temp = node->data;
        node->data = leftSum + rightSum;
        
        return node->data + temp;
    }
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        int ans = solve(node);
    }
};

int main()
{
    
    return 0;
}