#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int& n, int i) {

    //base case
    if(i == n-1) 
        return true;

    //processing
    if(arr[i] > arr[i+1]) {
        return false;
    }

    //R.R
    return isSorted(arr, n, i+1);
}

int main()
{
    int arr[] = {1,3,5,7,9};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;

    bool ans = isSorted(arr, n, i);

    if(ans) {
        cout << "array is sorted" << endl;
    }
    else {
        cout << "array is not sorted" << endl;
    }
    
    return 0;
}