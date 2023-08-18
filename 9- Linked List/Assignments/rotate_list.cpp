#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
private:

    int getLength(ListNode* &head) {
        int len = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            len++;
            temp = temp->next;
        }

        return len;
    }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == 0)   return 0;

        int len = getLength(head);
        int actualRotateK = (k % len);

        if(actualRotateK == 0)  return head;

        int newTailPos = len - actualRotateK - 1;

        ListNode* newTail = head;

        while(newTailPos--) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        ListNode* it = newHead;

        while(it->next != NULL) {
            it = it->next;
        }

        it->next = head;
        return newHead;
    }
};

int main()
{
    
    return 0;
}