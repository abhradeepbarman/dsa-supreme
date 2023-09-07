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

void levelOrderTraversal(Node* root) {
    
    queue<Node*> q;

    //initially
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {

        //step 1
        Node* temp = q.front();

        //step 2
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            //step 3
            cout << temp->data << " ";

            //step 4
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void preOrder(Node* root) {
    //NLR
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}




//-----------------------------------------------------------------------------------------
//NEW CODE



Node* insertIntoBST(Node* root, int data) {
   
    if(root == NULL) {
        //this is the first node we have to create
        root = new Node(data);
        return root;
    }

    //not the first node
    if(root->data > data) {
        //insert in left
        root->left = insertIntoBST(root->left, data);
    }
    else {
        //insert in right
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void takeInput(Node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}


//------------------------------------------------------------------------------------------------------------


int main()
{
    Node* root = NULL;

    cout << "Enter the data for Node: " << endl;
    takeInput(root);

    //print tree
    cout << "level order Traversal:" << endl;
    levelOrderTraversal(root);

    cout << endl << "Preorder Traversal: " << endl;
    preOrder(root);

    cout << endl << "Inorder Traversal: " << endl;
    inOrder(root);

    cout << endl << "Postorder Traversal: " << endl;
    postOrder(root);
    
    return 0;
}