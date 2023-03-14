#include<bits/stdc++.h>
using namespace std;

// Union of two arrays  ( assuming NO Duplicates )

int main()
{
    vector<int> arr = {1, 2, 9};
    vector<int> brr = {3, 6, 8};

    vector<int> ans;

    // push all elements of arr
    for(int i=0; i<arr.size(); i++) {
        ans.push_back(arr[i]);
    }

    // push all elements of brr
    for(int i=0; i<brr.size(); i++) {
        ans.push_back(brr[i]);
    }

    // print ans array
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}