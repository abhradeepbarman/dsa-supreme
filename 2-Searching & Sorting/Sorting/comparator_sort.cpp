#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main()
{
    vector<int> arr = {5,3,6,4,9};

    // sort(arr.begin(), arr.end());

    //comparator sort
    sort(arr.begin(), arr.end(), comp);

    for(auto it: arr) {
        cout << it << " ";
    }
    
    return 0;
}