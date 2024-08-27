#include<bits/stdc++.h>
using namespace std;

class Solution {
    void merge(vector<int>& nums, int s, int mid, int e) {
        // Gap Method
        int totalSize = e-s+1;
        int gap = (totalSize / 2) + (totalSize % 2);

        while(gap > 0) {
            int i=s, j= s+gap;

            while(j<=e) {
                if(nums[i] > nums[j]) {
                    swap(nums[i], nums[j]);
                }
                i++, j++;
            }
            gap = (gap <= 1) ? 0 : ((gap / 2) + (gap % 2));
        }
    }

    void mergeSort(vector<int>& nums, int s, int e) {
        if(s >= e) {
            return;
        }

        int mid = s+(e-s)/2;
        mergeSort(nums, s, mid);
        mergeSort(nums, mid+1, e);
        merge(nums, s, mid, e);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};

int main()
{
    
    return 0;
}