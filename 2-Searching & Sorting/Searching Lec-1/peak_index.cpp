#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while(s < e) {
            int mid = s + (e-s) / 2;

            if(arr[mid] > arr[mid + 1]) {
                // we are in dec part of array
                // mid can be ans, but search in left
                // this why end != mid-1
                e = mid;
            }
            else {
                // we are in inc part of array
                s = mid + 1;  
                // because we know arr[mid+1] > arr[mid]
            }
        }
        // in the end, start == end ans pointing to the largest number because of 2 checks above
        // more elaboration: At every point of time, start and end have the best possible answer till that time.
        // at last, when only 1 element is remaining, that is the largest number
        return s;  //or return end, as boht are equal
    }
};

int main()
{
    
    return 0;
}