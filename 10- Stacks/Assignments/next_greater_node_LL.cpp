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
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != 0) {
            ListNode* forward = curr->next;

            curr->next = prev;

            prev = curr;
            curr = forward;
        }

        return prev;
    }

    vector<int> nextLargerNodes(ListNode* head) {
        
        //reverse LL
        head = reverse(head);

        stack<int> s;
        s.push(0);

        ListNode* temp = head;
        vector<int> ans;

        while(temp != NULL) {
            int curr = temp->val;

            while(s.top() <= curr && s.top() != 0) {
                s.pop();
            }

            ans.push_back(s.top());
            s.push(curr);

            temp = temp->next;
        }

        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    
    return 0;
}