#include<bits/stdc++.h>
using namespace std;


// Problem : find max min number of nodes between critical points




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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans = {-1, -1}; //minDist, maxDist

        ListNode* prev = head;
        if(prev == 0)   return ans;

        ListNode* curr = head->next;
        if(curr == 0)    return ans;    //single node

        ListNode* nxt = head->next->next;
        if(nxt == 0)   return ans;     ///only two node

        int firstCP = -1;
        int lastCP = -1;
        int minDist = INT_MAX;  
        int i = 1;    

        while(nxt != NULL) {
            bool isCP = ((curr->val > prev->val && curr->val > nxt->val) || 
                        (curr->val < prev->val && curr->val < nxt->val)) ? true : false;

            if(isCP && firstCP == -1) {
                firstCP = i;
                lastCP = i;
            }
            else if(isCP) {
                minDist = min(minDist, i - lastCP);
                lastCP = i;
            }

            ++i;
            prev = prev->next;
            curr = curr->next;
            nxt = nxt->next;
        }

        if(lastCP == firstCP) {
            //only 1 ans found
            return ans;
        }
        else {
            ans[0] = minDist;
            ans[1] = lastCP - firstCP;
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}