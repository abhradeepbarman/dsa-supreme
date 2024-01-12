#include<bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
class ListNode {
    public:
        int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == 0)  return list2;
        if(list2 == 0)  return list1;
           
        ListNode* ansHead = new ListNode(-1);
        ListNode* ansTail = ansHead;
        ListNode* temp = 0;

        while(list1 != 0 && list2 != 0) {
            if(list1->val <= list2->val) {
                temp = list1;
                list1 = list1->next;
                temp->next = 0;
                ansTail->next = temp;
                ansTail = temp;
            }
            else {
                temp = list2;
                list2 = list2->next;
                temp->next = 0;
                ansTail->next = temp;
                ansTail = temp;
            }
        }

        if(list1 != 0) {
            ansTail->next = list1;
        }

        if(list2 != 0) {
            ansTail->next = list2;
        }

        ansHead = ansHead->next;
        return ansHead;
    }
};


// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
//         if(left == 0)   return right;
//         if(right == 0)  return left;

//         ListNode* ans = new ListNode(-1);
//         ListNode* mptr = ans;

//         while(left && right) {
//             if(left->val <= right->val) {
//                 mptr->next = left;
//                 mptr = left;
//                 left = left->next;
//             }
//             else {
//                 mptr->next = right;
//                 mptr = right;
//                 right = right->next;
//             }
//         }

//         if(left) {
//             mptr->next = left;
//         }

//         if(right) {
//            mptr->next = right; 
//         }

//         ans = ans->next;
//         return ans;
//     }
// };


int main()
{
    
    return 0;
}