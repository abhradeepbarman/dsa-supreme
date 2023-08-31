#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {
    int data;
    cout << "Enter the data: ";
    cin >> data;
 
    //base case
    if(data == -1) {
        return NULL;
    }

    //STEP 1:
    Node* root = new Node(data);

    //STEP 2:
    cout << "Enter data for left part of " << data << " node" << endl;
    root->left = buildTree();

    //STEP 3:
    cout << "Enter data for right part of " << data << " node" << endl;
    root->right = buildTree();

    return root;
}

int main()
{
    Node* root = NULL;

    root = buildTree();
    
    return 0;
}