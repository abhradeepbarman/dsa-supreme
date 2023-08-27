#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        //first window process
        for(int i=0; i<k; i++) {
            
            //smaller elements remove
            while(!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }

            //inserting index, so that we can check out of window elements
            dq.push_back(i);
        }

        //store answer for first window
        ans.push_back(nums[dq.front()]);

        //remaining windows process
        for(int i=k; i<nums.size(); i++) {
            
            //out of window element remove
            if(!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
            }

            //now again, we have to remove smaller elements
            while(!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }

            //inserting index, so that we can check out of window elements
            dq.push_back(i);

            //curr windows ka ans store
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}