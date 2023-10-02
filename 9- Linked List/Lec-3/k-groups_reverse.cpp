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

void print(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* &head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

Node* reverseKNodes(Node* &head, int k)
{
    if(head == NULL) {
        //empty LL
        return NULL;
    }

    int len = getLength(head);
    if(k > len) {
        //invalid value for k
        return head;
    }

    //it means no. of nodes in LL is >= k
    //Step 1: reverse first k nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    int count = 0;

    while(count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //Step 2: recursive call
    if(curr != NULL) {
        //we still have nodes left to reverse
        head->next = reverseKNodes(forward, k);
    }

    //Step 3: return head of the modified LL
    return prev;
}

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);

    head = reverseKNodes(head, 3);

    print(head);
    
    return 0;
}