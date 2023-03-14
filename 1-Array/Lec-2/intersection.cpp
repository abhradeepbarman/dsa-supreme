#include<bits/stdc++.h>
using namespace std;

// Intersection of two arrays

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 8};
    vector<int> brr  = {3, 3, 4, 9, 10};

    vector<int> ans;

    // outer loop on arr
    for(int i=0; i<arr.size(); i++) {
        int element = arr[i];

        // for every element, run loop on brr
        for(int j=0; j<brr.size(); j++) {

            if(element == brr[j]) {
                ans.push_back(element);
                // mark
                brr[j] = INT_MIN;
            }
        }
    }

    // print ans array
    for(auto i: ans) {
        cout << i << " ";
    }
    
    return 0;
}