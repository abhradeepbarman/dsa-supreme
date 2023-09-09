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

class Solution{
  public:
  
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node* succ = NULL;
        Node* curr = root;
        
        while(curr != NULL) {
            if(curr->data > x->data) {
                succ = curr;
                curr = curr->left;
            }
            else {
                curr = curr->right;
            }
        }
        
        return succ;
    }
};

int main()
{
    
    return 0;
}