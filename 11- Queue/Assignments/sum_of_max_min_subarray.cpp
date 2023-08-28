#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>& nums, int k) {
    deque<int> dq, dq2;
    int ans = 0;

    //first window process
    for(int i=0; i<k; i++) {
        
        //smaller elements remove
        while(!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }

        //bigger elements remove
        while(!dq2.empty() && nums[i] <= nums[dq2.back()]) {
            dq2.pop_back();
        }

        //inserting index, so that we can check out of window elements
        dq.push_back(i);
        dq2.push_back(i);
    }

    //store answer for first window
    ans +=  (nums[dq.front()] + nums[dq2.front()]);

    //remaining windows process
    for(int i=k; i<nums.size(); i++) {
        
        //out of window element remove
        if(!dq.empty() && i - dq.front() >= k) {
            dq.pop_front();
        }

        //out of window element remove
        if(!dq2.empty() && i - dq2.front() >= k) {
            dq2.pop_front();
        }

        //now again, we have to remove smaller elements
        while(!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }

        //bigger elements remove
        while(!dq2.empty() && nums[i] <= nums[dq2.back()]) {
            dq2.pop_back();
        }

        //inserting index, so that we can check out of window elements
        dq.push_back(i);
        dq2.push_back(i);

        //curr windows ka ans store
        ans +=  (nums[dq.front()] + nums[dq2.front()]);
    }
    return ans;
}




int main()
{
    vector<int> arr = {2,5,-1,7,-3,-1,-2};
    int k = 4;

    int ans = solve(arr, k);
    cout << ans << endl;
    
    return 0;
}