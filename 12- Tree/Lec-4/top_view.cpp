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

void topView(Node* root) {

    //edge case
    if(root == NULL) {
        return;
    }

    //create a map for storing HD & topNode->data
    map<int,int> topNode;


    //level order
    //we will store a pair consisting of Node & Horizontal Distance
    queue<pair<Node*,int>> q;
    q.push(make_pair(root, 0));

    while(!q.empty()) {

        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;

        //check answer for this HD already exists or not
        if(topNode.find(hd) == topNode.end()) {
            //does not exist
            //create entry
            topNode[hd] = frontNode->data;
        }

        if(frontNode->left) {
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode->right) {
            q.push(make_pair(frontNode->right, hd+1));
        }
    }


    //now our answer stored in map
    cout << "Top View: " << endl;
    for(auto it: topNode) {
        cout << it.second << " ";
    }
}

int main()
{
    Node* root = buildTree();

    topView(root);
    
    return 0;
}