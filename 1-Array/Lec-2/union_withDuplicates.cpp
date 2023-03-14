#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    vector<int> brr = {3, 4, 5, 6};

    vector<int> ans;

    // mark duplicate elements
    // outer loop on arr
    for(int i=0; i<arr.size(); i++) {
        int element = arr[i];

        // for every element, run loop on brr
        for(int j=0; j<brr.size(); j++) {

            if(element == brr[j]) {
                // mark
                brr[j] = INT_MIN;
            }
        }
    }


    // push all elements of arr
    for(int i=0; i<arr.size(); i++) {
        ans.push_back(arr[i]);
    }

    // push all elements of brr
    for(int i=0; i<brr.size(); i++) {

        if(brr[i] != INT_MIN)
            ans.push_back(brr[i]);
    }

    // print ans array
    for(auto i: ans) {
        cout << i << " ";
    }


    return 0;
}