#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
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
        return nums[s];
    }
};

int main()
{
    
    return 0;
}