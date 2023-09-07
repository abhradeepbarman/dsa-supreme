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

//find min element
int minValue(Node* root) {
    Node* temp = root;

    //base case
    if(temp == NULL) {
        return -1;
    }
    
    while(temp->left != NULL) {
        temp = temp->left;
    }
    
    return temp->data;
}

//find max element
int maxValue(Node* root) {
    Node* temp = root;

    //base case
    if(temp == NULL) {
        return -1;
    }
    
    while(temp->right != NULL) {
        temp = temp->right;
    }
    
    return temp->data;
}



int main()
{
    
    return 0;
}