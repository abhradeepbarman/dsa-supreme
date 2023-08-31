#include<iostream>
#include<queue>
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

int height(Node* root) {
    //base case
    if(root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;

    return ans;
}

int main()
{
    Node* root = NULL;

    root = buildTree();

    cout << "height of tree = " << height(root) << endl;
    
    return 0;
}