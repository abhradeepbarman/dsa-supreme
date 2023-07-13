#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int key, int s, int e) {

    //base case
    if(s > e) {
        return -1;
    }


    int mid = s + (e - s) / 2;

    if(arr[mid] == key) {
        return mid;
    }
    else if(arr[mid] < key) {
        return binarySearch(arr, key, mid+1, e);
    }
    else {
        return binarySearch(arr, key, s, mid-1);
    }
}

int main()
{
    vector<int> arr = {10,20,30,40,50,60,70};
    int n = arr.size();
    int key = 70;
    
    int s = 0;
    int e = n-1;

    int ans = binarySearch(arr, key, s, e);

    if(ans != -1) {
        cout << "key found at index " << ans << endl; 
    }
    else {
        cout << "key is absent" << endl;
    }
    
    return 0;
}