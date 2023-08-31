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

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(NULL);

    //initially
    q.push(root);

    while(!q.empty()) {
        //A
        Node* temp = q.front();

        //B
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            //C
            cout << temp->data << " ";

            //D
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node* root = NULL;

    root = buildTree();

    levelOrderTraversal(root);
    
    return 0;
}