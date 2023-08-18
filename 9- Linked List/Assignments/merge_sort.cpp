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
public:
    ListNode* findMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL) {
            fast = fast->next;
            if(fast->next != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
        }

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        if(left == 0)   return right;
        if(right == 0)  return left;

        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;

        while(left && right) {
            if(left->val <= right->val) {
                mptr->next = left;
                mptr = left;
                left = left->next;
            }
            else {
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }

        if(left) {
            mptr->next = left;
        }

        if(right) {
           mptr->next = right; 
        }

        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head == 0 || head->next == 0) {
            return head;
        }

        //Break LL into 2 halfs using using mid Node
        ListNode* mid = findMid(head);

        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = 0;

        //sort RE
        left = sortList(left);
        right = sortList(right);

        //merge both left & right LL
        ListNode* mergedLL = merge(left, right);
        return mergedLL; 
    }
};

int main()
{
    
    return 0;
}