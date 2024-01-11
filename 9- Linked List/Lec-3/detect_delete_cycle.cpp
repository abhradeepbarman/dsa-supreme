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

//check if loop is present or not
bool checkForLoop(Node* &head) {
    
    if(head == NULL) {
        //empty LL
        return false;
    }

    Node* slow = head;
    Node* fast = head;


    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast) {
            //loop present
            return true;
        }
    }
    //fast == NULL --> loop not present
    return false;
}

//find the starting point of the loop
Node* startingPointLoop(Node* &head) {
    
    if(head == NULL) {
        //empty LL
        return head;
    }

    Node* slow = head;
    Node* fast = head;


    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast) {
            slow = head;
            break;
        }
    }

    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    //starting point
    return slow;  //we can return fast also
}

//remove the loop
Node* deleteLoop(Node* &head) {
    
    if(head == NULL) {
        //empty LL
        return head;
    }

    Node* slow = head;
    Node* fast = head;


    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast) {
            slow = head;
            break;
        }
    }

    //loop not present
    if(fast == nullptr)
        return head;

    //get the start point of loop
    while(slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    
    //delete loop
    Node* startOfLoop = slow;
    Node* temp = startOfLoop->next;
    
    while(temp->next != startOfLoop) {
        temp = temp->next;
    }
    temp->next = 0;
    return head;
}

void print(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = fifth;

    //check if loop is present or not
    bool ans = checkForLoop(head);

    if(ans) {
        cout << "Loop present" << endl;
    } else {
        cout << "Loop absent" << endl;
    }

    //find the starting point of sloop
    Node* start = startingPointLoop(head);

    cout << "starting Node : " << start->data << endl;


    //delete loop
    deleteLoop(head);
    print(head);


    //check if loop is present or not
    ans = checkForLoop(head);

    if(ans) {
        cout << "Loop present" << endl;
    } else {
        cout << "Loop absent" << endl;
    }


    return 0;
}