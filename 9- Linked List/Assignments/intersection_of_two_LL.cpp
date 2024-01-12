#include<bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    int length(ListNode* head) {
        int cnt = 0;

        while(head != 0) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = length(headA);
        int len2 = length(headB);

        int diff = 0;
        ListNode* ptr1 = 0;   //ptr1 will be used to store the larger linked list
        ListNode* ptr2 = 0;   //ptr2 will be used to store the smaller linked list

        if(len1 > len2) {
            diff = len1 - len2;
            ptr1 = headA;
            ptr2 = headB;
        }
        else {
            diff = len2 - len1;
            ptr1 = headB;
            ptr2 = headA;
        }

        //make the larger linked list move diff steps
        while(diff != 0) {
            ptr1 = ptr1->next;
            diff--;
        }

        while(ptr1 != 0 && ptr2 != 0) {
            if(ptr1 == ptr2) {
                return ptr1;
            }

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return nullptr;
    }
};

int main()
{
    
    return 0;
}