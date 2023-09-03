#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

// your task is to complete this function
bool solve(Node *root, int& k, int node, int& ans) {
    
    //base case
    if(root == NULL) {
        return false;
    }
    
    if(root->data == node) {  
        return true;
    }
    
    bool leftAns = solve(root->left, k, node, ans);
    bool rightAns = solve(root->right, k, node, ans);
    
    //wapas aa rhe honge
    //check if we got answer from left or right
    if(leftAns || rightAns) {
        k--;
    }
    
    if(k == 0) {
       ans = root->data;
       k = -1;
    }
    
    return leftAns || rightAns;
}

int kthAncestor(Node *root, int k, int node)
{
    int ans = -1;
    bool found = solve(root,k,node,ans);
    
    return ans;
}

int main()
{
    
    return 0;
}