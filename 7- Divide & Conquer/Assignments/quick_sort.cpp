#include<bits/stdc++.h>
using namespace std;

class Solution {
    int partition(vector<int>& nums, int s, int e) {
        int i=s-1, j=s, pivot=e;

        while(j < pivot) {
            if(nums[j] < nums[pivot]) {
                i++;
                swap(nums[j], nums[i]);
            }
            j++;
        }

        i++;
        swap(nums[i], nums[pivot]);
        return i;
    }

    void solve(vector<int>& nums, int s, int e) {
        if(s >= e)
            return;

        int p = partition(nums, s, e);
        solve(nums, s, p-1);
        solve(nums, p+1, e);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int s=0, e=nums.size()-1;
        solve(nums, s, e);
        return nums;
    }
};

int main()
{
    
    return 0;
}