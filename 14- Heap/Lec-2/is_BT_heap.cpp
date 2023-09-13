#include<bits/stdc++.h>
using namespace std;

class Solution {
    int countNode(struct Node* root) {
        //base case
        if(root == NULL) {
            return 0;
        }
        
        int ans = 1 + countNode(root->left) + countNode(root->right);
        return ans;
    }
    
    bool isCBT(struct Node* root, int index, int totalNodes) {
        //base case
        if(root == NULL) {
            return true;
        }
        
        if(index >= totalNodes) {
            return false;
        }
        else {
            bool leftAns = isCBT(root->left, 2*index+1, totalNodes);
            bool rightAns = isCBT(root->right, 2*index+2, totalNodes);
            
            return leftAns && rightAns;
        }
    }
    
    bool isMaxOrder(struct Node* root) {
        //base case
        
        //leaf node
        if(root->left == NULL && root->right == NULL) {
            return true;
        }
        
        //single child
        if(root->right == NULL) {
            return (root->data > root->left->data);
        }
        
        if(root->left == NULL) {
            return (root->data > root->right->data);
        }
        
        //2 child exists
        bool rootAns = ((root->data > root->left->data) && (root->data > root->right->data));
        bool leftAns = isMaxOrder(root->left);
        bool rightAns = isMaxOrder(root->right);
        
        return rootAns && leftAns && rightAns;
    }
    
  public:
    bool isHeap(struct Node* root) {
        
        int index = 0;
        int totalNodes = countNode(root);
        
        if(isCBT(root, index, totalNodes) && isMaxOrder(root)) {
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