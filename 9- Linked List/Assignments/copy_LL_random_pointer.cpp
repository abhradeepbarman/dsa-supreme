#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
private:
    void insertAtTail(Node* &head, Node* &tail, int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }
public:
    Node* copyRandomList(Node* head) {
        //STEP 1: create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        //Step 2: create a Map
        unordered_map<Node*, Node*> mpp;

        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL) {
            mpp[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL) {
            cloneNode->random = mpp[originalNode->random];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};









class Solution2 {
private:

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

public:
    Node* copyRandomList(Node* head) {
        //STEP 1: create a clone list

        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        //STEP 2: clone Nodes add in between Original nodes
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL) {
            Node* forward = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = forward;

            forward = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = forward;
        }

        //STEP 3: random pointer copy

        temp = head;

        while(temp != NULL) {
            if(temp->next != NULL) {

                temp->next->random = temp->random ? temp->random->next : temp->random;
            }

            temp = temp->next->next;
        }

        //STEP 4: revert changes done in step 2
        originalNode = head;
        cloneNode =  cloneHead;

        while(originalNode != NULL && cloneNode != NULL) {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if(originalNode != NULL) {
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }

        //step 5: return ans;
        return cloneHead;
    }
};







int main()
{
    
    return 0;
}