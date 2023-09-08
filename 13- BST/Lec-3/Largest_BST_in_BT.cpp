#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class info {
    public:

    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(Node* root, int& maxSize) {
    //base case
    if(root == NULL) {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info leftAns = solve(root->left, maxSize);
    info rightAns = solve(root->right, maxSize);

    info currNode;

    currNode.size = leftAns.size + rightAns.size + 1;
    currNode.maxi = max(root->data, rightAns.maxi);
    currNode.mini = min(root->data, leftAns.mini);

    if(leftAns.isBST && rightAns.isBST 
        && (root->data > leftAns.maxi && root->data < rightAns.mini)) {

            currNode.isBST = true;
    }   
    else {
        currNode.isBST = false;
    }

    //answer update
    if(currNode.isBST) {
        maxSize = max(maxSize, currNode.size);
    }

    return currNode;
}

int largestBST(Node * root){
    int maxSize = 0;
    info temp = solve(root, maxSize);

    return maxSize;
}

int main()
{
    
    return 0;
}