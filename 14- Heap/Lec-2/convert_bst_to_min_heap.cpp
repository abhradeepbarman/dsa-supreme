#include<bits/stdc++.h>
using namespace std;

class BinaryTreeNode {
    public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void inorderTraverse(BinaryTreeNode* root, vector<int>& inorder) {
	//base case
	if(root == NULL) {
		return;
	}

	inorderTraverse(root->left, inorder);
	inorder.push_back(root->data);
	inorderTraverse(root->right, inorder);
}

void preOrder(BinaryTreeNode* root, vector<int>& inorder, int& i) {
	//base case
	if(root == NULL) {
		return;
	}

	root->data = inorder[i++];
	preOrder(root->left, inorder, i);
	preOrder(root->right, inorder, i);
}

BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int> inorder;

	//store inorder traversal
	inorderTraverse(root, inorder);

	//insert values in preorder traversal
	int i = 0;
	preOrder(root, inorder, i);

	return root;
}

int main()
{
    
    return 0;
}