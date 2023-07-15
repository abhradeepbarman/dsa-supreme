#include<bits/stdc++.h>
using namespace std;

void printSubarray_util(vector<int>& arr, int s, int e) {

    //base case
    if(e == arr.size()) {
        return;
    }

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    printSubarray_util(arr, s, e+1);
}

void printSubarray(vector<int>& arr, int i) {

    //base case
    if(i >= arr.size()) {
        return;
    }

    printSubarray_util(arr, i, i);
    printSubarray(arr, i+1);
}

int main()
{
    vector<int> arr = {1,2,3};
    int i = 0;
    
    printSubarray(arr, i);
    
    return 0;
}