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

Node* findMid(Node* &head) {
    
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node* reverse(Node* &head) {

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while(curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    
    return prev;
}

bool checkPalindrome(Node* &head) {

    if(head == NULL) {
        cout << "LL is empty" << endl;
        return true;
    }

    if(head->next = NULL) {
        //single node
        return true;
    }

    //find middle
    Node* mid = findMid(head);

    //reverse from next node of mid
    mid->next = reverse(mid->next);

    //start compare
    Node* temp1 = head;
    Node* temp2 = mid->next; 

    while(temp2 != NULL) {
        if(temp1->data != temp2->data) {
            return false;
        }
        else {
             temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(30);
    Node* fifth = new Node(40);
    Node* sixth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;


    bool ans = checkPalindrome(head);

    if(ans) {
        cout << "palindrome LL" << endl;
    } else {
        cout << "Not palindrome LL" << endl;
    }


    return 0;
}