#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


//BST to DLL

void convertIntoSortedDLL(TreeNode *root, TreeNode* &head) {
    //base case
    if(root == NULL) {
        return;
    }    
    
    //conver right subtee into DLL
    convertIntoSortedDLL(root->right, head);
    
    root->right = head;
    if(head != NULL)
        head->left = root;
    
    head = root;

    //conver left subtee into DLL
    convertIntoSortedDLL(root->left, head);
}



//Merge 2 sorted LL

TreeNode* mergeLL(TreeNode *head1, TreeNode *head2) {
    TreeNode* head = NULL;
    TreeNode* tail = NULL;
    
    while(head != NULL && head2 != NULL) {
        
        if(head1->data < head2->data) {
            if(head == NULL) {
                head = head1;
                tail = head1; 
                head1 = head1->right;
            }
            else {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else {
            if(head == NULL) {
                head = head2;
                tail = head2; 
                head2 = head2->right;
            }
            else {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while(head1 != NULL) {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2 != NULL) {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }

    return head;
}

int countNode(TreeNode * head) {
    int count = 0;
    TreeNode* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->right;
    }

    return count;
}


//Sorted DLL to BST 

TreeNode* sortedLLtoBST(TreeNode* &head, int n) {
    //base case
    if(n <= 0 || head == NULL) {
        return NULL;
    }
    
    TreeNode* leftSubtree = sortedLLtoBST(head, n/2);
    
    TreeNode* root = head;
    root->left = leftSubtree;
    head = head->right;
    
    root->right = sortedLLtoBST(head, n-n/2-1);

    return root;
}

int main()
{
    
    return 0;
}