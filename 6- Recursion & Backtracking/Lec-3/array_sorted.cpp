#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n, int i) {

    //base case
    if(i == n-1)
        return true;
    
    if(arr[i] > arr[i+1])
        return false;

    return isSorted(arr, n, i+1);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;

    bool ans = isSorted(arr, n, i);

    if(ans)
        cout << "array is sorted!" << endl;
    else 
        cout << "array is not sorted!" << endl;

    return 0;
}