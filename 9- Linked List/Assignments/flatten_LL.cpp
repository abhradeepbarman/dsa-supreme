#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

Node* merge(Node* left, Node* right) {
    if(left == 0)   return right;
    if(right == 0)  return left;
    
    Node* ans = new Node(-1);
    Node* temp = ans;
    
    while(left != 0 && right != 0) {
        if(left->data < right->data) {
            temp->bottom = left;
            temp = left;
            left = left->bottom;
        }
        else {
            temp->bottom = right;
            temp = right;
            right = right->bottom;
        }
    }
    
    while(left != 0) {
        temp->bottom = left;
        temp = left;
        left = left->bottom;
    }
    
    while(right != 0) {
        temp->bottom = right;
        temp = right;
        right = right->bottom;
    }
    
    ans = ans->bottom;
    return ans;
}
    
    
Node *flatten(Node *root)
{
    //base case
    if(root == 0 || root->next == 0) {
        return root;
    }
    
    Node* head1 = root;
    Node* head2 = root->next;
    Node* head3 = root->next->next;
    
	//detach the first two nodes from the chain
    head1->next = 0;
    head2->next = 0;
    
	//now merge two sorted linked list
    Node* head = merge(head1, head2);
    head->next = head3;
    
	//recursion will do for the rest nodes
    return flatten(head);
}


int main()
{
    
    return 0;
}