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



Node* deleteFromBST(Node* root, int key) {
    //base case
    if(root == NULL) {
        return root;
    }

    if(root->data == key) {
        //0 child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left == NULL && root->right != NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL) {
            int inorderPred = maxValue(root->left);
            root->data = inorderPred;
            root->left = deleteFromBST(root->left, inorderPred);
            return root;
        }

    }
    else if(root->data > key) {
        //left search
        root->left = deleteFromBST(root->left, key);
    }
    else {
        //right search
        root->right = deleteFromBST(root->right, key);
    }
    
}

int main()
{
    Node* root = NULL;

    cout << "Enter the data for Node: " << endl;
    takeInput(root);

    deleteFromBST(root, 100);

    levelOrderTraversal(root);
    
    return 0;
}