#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        while(s < e) {
            int mid = s + (e - s) / 2;

            if(nums[mid] < nums[e]) {
                // this part is sorted , i.e pivot will lie over other side
                // search in left
                // mid can be a possible ans.
                e = mid;
            }
            else {
                // arr[mid] > arr[e]
                //this part is not sorted, i.e pivot will lie over this side
                // search in right
                s = mid + 1;
            }
        }
        return s;
    }

    int binarySearch(vector<int> arr, int target, int s, int e) {

        while(s <= e) {
            int mid = s + (e - s) / 2;

            if(arr[mid] == target) {
                // target found
                return mid;
            }
            else if(arr[mid] < target) {
                // search in right
                s = mid + 1;
            }
            else {
                // search in left
                e = mid - 1;
            }
        }
        // element not found
        return -1;
    }

    int search(vector<int>& nums, int target) {
        // find pivot
        int pivot = findPivot(nums);
        
        // search in first half
        int ans = binarySearch(nums, target, 0, pivot-1);

        // if not found, search in second half
        if(ans != -1) {
            return ans;
        }
        else {
            return binarySearch(nums, target, pivot, nums.size()-1);
        }
    }
};

int main()
{
    
    return 0;
}