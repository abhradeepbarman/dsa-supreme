#include<bits/stdc++.h>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; 

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(head == 0)   return 0;

        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* lastNode = NULL;

        int sum = 0;
        while(fast != NULL) {

            if(fast->val != 0) {
                sum += fast->val;
            }
            else {
                slow->val = sum;
                lastNode = slow;
                slow = slow->next;
                sum = 0;
            }
            
            fast = fast->next;
        }

        //delete nodes
        ListNode* temp = lastNode->next;
        lastNode->next = 0;

        while(temp != NULL) {
            ListNode* t = temp->next;
            delete temp;
            temp = t;
        }

        return head;
    }
};


int main()
{
    
    return 0;
}