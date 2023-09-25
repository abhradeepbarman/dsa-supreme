#include<bits/stdc++.h>
using namespace std;

class Solution {
    void mergeInPlace(vector<int>& arr, int s, int mid, int e) {
        int total_len = e-s+1;
        int gap = (total_len / 2) + (total_len % 2);

        while(gap > 0) {
            int i = s;
            int j = i + gap;

            while(j <= e) {
                if(arr[i] > arr[j]) {
                    swap(arr[i], arr[j]);
                }
                i++, j++;
            }

            gap = (gap <= 1) ? 0 : (gap / 2) + (gap % 2);
        }
    } 

void mergeSort(vector<int>& arr, int s, int e) {
    //base case
    if(s >= e) {
        return;
    }

    int mid = s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    mergeInPlace(arr, s, mid, e);
}


public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        int s = 0;
        int e = n-1;

        mergeSort(nums, s, e);
        return nums;
    }
};

int main()
{
    
    return 0;
}