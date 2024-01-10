#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    //TODO: write destructor for Node
    ~Node() {

    }
};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node* head) {

    Node* temp = head;    
    int len = 0;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }

    return len;
}
 
void insertAtHead(Node* &head, Node* &tail, int data) {

    //check if LL is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data) {

    //check if LL is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPos(Node* &head, Node* &tail, int pos, int data) {

    //check if LL is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(pos <= 0) {
        insertAtHead(head, tail, data);
        return;
    }

    int len = getLength(head);
    if(pos >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    Node* prevNode = head;

    for(int i=1; i<pos; i++) {
        prevNode = prevNode->next;
    }

    Node* curr = prevNode->next;

    Node* newNode = new Node(data);
    newNode->next = curr;
    curr->prev = newNode;
    prevNode->next = newNode;
    newNode->prev = prevNode; 

    

    // without curr pointer - but it's better to use curr for clarity

    // Node* newNode = new Node(data);
    // prevNode->next->prev = newNode;
    // newNode->next = prevNode->next;
    // prevNode->next = newNode;
    // newNode->prev = prevNode;
}

void deleteAtPos(Node* &head, Node* &tail, int pos) {

    //check if LL is empty
    if(head == NULL) {
        cout << "LL is empty" << endl;
        return;
    }


    if(head->next == NULL) {
        //single node
        Node* temp = head;  
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if(pos > len) {
        cout << "Please enter a valid position" << endl;
        return;
    }

    if(pos <= 1) {
        //delete first Node
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }



    if(pos >= len) {
        //delete last node
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }


    //deletion in middle
    Node* curr = head;

    for(int i=1; i<pos; i++) {
        curr = curr->next;
    }

    Node* left = curr->prev;
    Node* right = curr->next;

    left->next = right;
    right->prev = left;
    curr->prev = NULL;
    curr->next = NULL;

    delete curr;
}

int main()
{
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);

    // first->next = second;
    // second->prev = first;

    // second->next = third;
    // third->prev = second;

    // third->next = fourth;
    // fourth->prev = third;

    // print(first);

    // cout << endl << "Length of Doubly LL : " << getLength(first) << endl;
    



    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 80);


    insertAtPos(head, tail, 1, 15);
    insertAtPos(head, tail, 3, 15);

    deleteAtPos(head, tail, 1);
    deleteAtPos(head, tail, 4);
    deleteAtPos(head, tail, 7);
    deleteAtPos(head, tail, 10);

    print(head);

    return 0;
}