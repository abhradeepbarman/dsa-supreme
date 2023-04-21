#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key, int s, int e) {

    // base case
    if(s > e)
        return -1;

    int mid = s + (e-s) / 2;

    if(arr[mid] == key) {
        return mid; 
    }
    else if(arr[mid] < key)  {
        return binarySearch(arr, key, mid+1, e);
    }   
    else {
        return binarySearch(arr, key, s, mid-1);
    }  
}

int main()
{
    int arr[] = {10,20,40,50,70,80};
    int n = sizeof(arr) / sizeof(int);
    int key = 20;
    int s = 0;
    int e = n-1;

    int ans = binarySearch(arr, key, s, e);

    cout << "key at index " << ans << endl;


    return 0;
}