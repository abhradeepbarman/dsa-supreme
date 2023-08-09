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

void sort012_dataReplace(Node* &head) {

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    //find count of 0s, 1s & 2s
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == 0) {
            zeroCount++;
        }
        else if(temp->data == 1) {
            oneCount++;
        }
        else {
            twoCount++;
        }

        temp = temp->next;
    }


    //fill 0s, 1s & 2s in the original LL
    temp = head;

    while(temp != NULL) {

        if(zeroCount != 0) {
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0) {
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }

        temp = temp->next;
    }
}

void insertAtTail(Node* &tail, Node* &curr) {
    //take out the node
    Node* temp = curr;
    curr = curr->next;
    temp->next = NULL;

    //append the node in dummy LL
    tail->next = temp;
    tail = temp;
}

Node* sort012(Node* &head) {
    
    //create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;


    //create separate lists
    Node* curr = head;

    while(curr != NULL) {
        int value = curr->data;
 
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else {
            insertAtTail(twoTail, curr);
        }
    }

    //merge 3 sub lists
    if(oneHead->next != NULL) {
        //1's list is not empty
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else {
        //1's list empty
        zeroTail->next = twoHead->next;
    }

    //setup head
    head = zeroHead->next;

    //delete dummy nodes
    zeroHead->next = NULL;
    delete zeroHead;

    oneHead->next = NULL;
    delete oneHead;

    twoHead->next = NULL;
    delete twoHead;

    return head;
}



int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(1);
    Node* fifth = new Node(2);
    Node* sixth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);

    // sort012_dataReplace(head);
    head = sort012(head);

    print(head);

    return 0;
}