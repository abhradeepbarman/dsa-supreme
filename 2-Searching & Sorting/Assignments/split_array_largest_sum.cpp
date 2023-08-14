#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int mid)
    {
        int count = 1;
        int subarraySum = 0;

        for(int i=0; i<nums.size(); i++) {

            if(nums[i] + subarraySum <= mid) {
                subarraySum += nums[i];
            }
            else {
                count++;
                if(count > k || nums[i] > mid) {
                    return false;
                }
                subarraySum = nums[i];
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
        }

        int s = 0;
        int e = sum;
        int ans = -1;

        while(s <= e) {
            int mid = s+(e-s)/2;

            if(isPossible(nums,k,mid)) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}