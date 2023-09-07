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

class Solution {
public:
    Node* searchBST(Node* root, int target) {
        //base case
        if(root == NULL) {
            return NULL;
        }

        if(root->data == target) {
            return root;
        }
        else if(root->data < target) {
            //right search
            return searchBST(root->right, target);
        }
        else {
            //left search
            return searchBST(root->left, target);
        }
    }
};

int main()
{
    
    return 0;
}