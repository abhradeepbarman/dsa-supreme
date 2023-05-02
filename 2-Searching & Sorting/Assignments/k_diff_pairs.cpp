#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int> arr, int target, int s) {
        int e = arr.size()-1;
        while(s<=e) {
            int mid = s+(e-s)/2;

            if(arr[mid] == target)
                return mid;
            else if(arr[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        // Two pointer Approach
        // sort(nums.begin(), nums.end());

        // set<pair<int, int>> ans;
        // int i=0, j=1;

        // while(j < nums.size()) {
        //     int diff = nums[j] - nums[i];

        //     if(diff == k) {
        //         ans.insert({nums[i], nums[j]});
        //         i++, j++;
        //     }
        //     else if(diff > k) {
        //         i++;
        //     }
        //     else {
        //         j++;
        //     }

        //     if(i == j)  
        //         j++;
        // }
        // return ans.size();


        // Binary Search
        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;

        for(int i=0; i<nums.size()-1; i++) {
            int pairElement = k + nums[i];

            int pos = binarySearch(nums, pairElement, i+1);
            if(pos != -1) {
                ans.insert({nums[i], nums[pos]});
            }
        }
        return ans.size();
    }
};

int main()
{

    
    return 0;
}