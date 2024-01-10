#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
            this->data= 0;
            this->next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

        //TODO: write a destructor to delete a Node
};

void print(Node* &head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findLength(Node* &head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

//insert at beginning of head
void insertAtHead(Node* &head, Node* &tail, int data) {

    //check for empty LL
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

//insert at the end
void insertAtTail(Node* &head, Node* &tail, int data) {

    //check for empty LL
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtPos(Node* &head, Node* &tail, int pos, int data) {

    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    //check if user want to insert at First
    if(pos == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    //check if user want to insert at Last
    int len = findLength(head);
    if(pos >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node* prev = head;

    //finding the position to insert
    while(i < pos) {
        prev = prev->next;
        i++; 
    } 

    Node* newNode = new Node(data);
    newNode->next = prev->next;
    prev->next = newNode;
}

//Reverse a Linked List 
Node* reverse(Node* &prev, Node* &curr) {

    //base case
    if(curr == NULL) {
        return prev;
    }

    //1 case solve
    Node* forward = curr->next;
    curr->next = prev;

    //R.R
    return reverse(curr, forward);
}



// reverse a LinkList : using Loop 
// Node* reverse(Node* &head) {
//     Node* prev = NULL;
//     Node* curr = head;

//     while(curr != NULL) {
//         Node* forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }

//     return prev;
// }



int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    Node* prev = NULL;
    Node* curr = head;

    head = reverse(prev, curr);

    print(head);

    return 0;
}