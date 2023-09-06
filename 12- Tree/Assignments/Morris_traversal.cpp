#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};


TreeNode* buildTree() {
    int data;
    cout << "Enter the data: ";
    cin >> data;

    //base case
    if(data == -1) {
        return NULL;
    }

    //STEP A
    TreeNode* root = new TreeNode(data);

    //STEP B
    cout << "Enter data for left part of " << data << " node: " << endl;
    root->left = buildTree();

    //STEP C
    cout << "Enter data for right part of " << data << " node: " << endl;
    root->right = buildTree();

    return root;
}


void MorrisTraversal(TreeNode* root)
{
    struct TreeNode *current, *pre;
 
    if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            cout << current->data << " ";
            current = current->right;
        }
        else {
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
                pre = pre->right;

            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
            else {
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            } 
        } 
    } 
}

int main()
{
    TreeNode* root = NULL;
    root = buildTree();

    MorrisTraversal(root);
    
    return 0;
}