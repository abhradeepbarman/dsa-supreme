#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};




class Solution
{
    void solve(Node* root, int len, int& maxLen, int sum, int& maxSum) {
        //base case
        if(root == NULL) {
            
            if(len > maxLen) {
                maxLen = len;
                maxSum = sum;
            }
            else if(len == maxLen) {
                maxSum = max(maxSum, sum);
            }
            
            return;
        }
        
        //1 case solve
        sum = sum + root->data;
        
        //Left
        solve(root->left, len+1, maxLen, sum, maxSum);
        //Right
        solve(root->right, len+1, maxLen, sum, maxSum);
    }
    
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int len = 0;
        int maxLen = 0;
        
        int sum = 0;
        int maxSum = INT_MIN;
        
        solve(root, len, maxLen, sum, maxSum);
        return maxSum;
    }
};

int main()
{
    
    return 0;
}