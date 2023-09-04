#include<bits/stdc++.h>
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

    //STEP A
    Node* root = new Node(data);

    //STEP B
    cout << "Enter data for left part of " << data << " node: " << endl;
    root->left = buildTree();

    //STEP C
    cout << "Enter data for right part of " << data << " node: " << endl;
    root->right = buildTree();

    return root;
}

void rightView(Node* root, int level, vector<int>& arr) {
    //base case
    if(root == NULL) {
        return;
    }

    if(level == arr.size()) {
        arr.push_back(root->data);
    }

    //right
    rightView(root->right, level+1, arr);
    //left
    rightView(root->left, level+1, arr);
}

int main()
{
    Node* root = buildTree();
    int level = 0;
    vector<int> arr;

    rightView(root, level, arr);

    cout << "Right view: " << endl;
    for(auto it: arr) {
        cout << it << " ";
    }
    
    return 0;
}