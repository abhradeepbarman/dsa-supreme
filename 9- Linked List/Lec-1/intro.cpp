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

        // write a destructor to delete a Node
        ~Node() {
            // Any cleanup or memory deallocation can be done here
            // In the case of a linked list node, you may not need to deallocate memory here, as the list's destructor can handle it.
            // However, if you have additional resources or dynamic memory allocated within each node, make sure to release them here.

            // In this case, we do not need to do anything special here
            // because there is no dynamically allocated memory in the class.
            // If data was dynamically allocated (e.g., int* data), you would need to free it here.
            // Example (if data was int*):
            // delete data;
            // data = nullptr;
        }
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

void deleteNode(Node* &head, Node* &tail, int pos) {
    
    //check if LL is empty
    if(head == NULL) {
        cout << "cannot delete, LL is empty" << endl;
        return;
    }

    //delete first Node
    if(pos <= 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    //delete Last Node
    int len = findLength(head);
    if(pos >= len) {
        //find prev
        Node* prev = head;
        while(prev->next != tail) {
            prev = prev->next;
        }

        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    // delete at middle
    int i = 1;
    Node* prev = head;

    //finding the position to insert
    while(i < pos-1) {
        prev = prev->next;
        i++; 
    } 

    Node* curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    
    // cout << "printing the LL:" << endl;
    // print(first);



    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 5);


    insertAtPos(head, tail, 2, 35);
    insertAtPos(head, tail, 0, 65);
    insertAtPos(head, tail, 8, 3);

    deleteNode(head, tail, 9);
    deleteNode(head, tail, 1);
    deleteNode(head, tail, 1);
    deleteNode(head, tail, 6);
    deleteNode(head, tail, 2);
    deleteNode(head, tail, 3);
    

    print(head);

    return 0;
}