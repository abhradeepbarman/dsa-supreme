#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution{
    pair<int,int> solve(Node* root) {
        //base case
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        //RE
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        //solve 1 case
        pair<int,int> res;
        
        res.first = root->data + left.second + right.second;
        res.second = max(left.first, left.second) + max(right.first, right.second);
        
        return res;
    }
    
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        pair<int,int> ans = solve(root);
        
        return max(ans.first, ans.second);
    }
};

int main()
{
    
    return 0;
}