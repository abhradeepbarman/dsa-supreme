#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeDuplicates(Node* &head) {

    if(head == NULL) {
        cout << "LL is empty" << endl;
        return;
    }

    if(head->next == NULL) {
        cout << "single node" << endl;
        return;
    }


    // >1 Node
    Node* curr = head;

    while(curr != 0) {
        if(curr->next != 0 && curr->data == curr->next->data) {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
        }
    }
}

int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);

    removeDuplicates(head);

    print(head);



    return 0;
}