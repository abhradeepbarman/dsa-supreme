#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int i) {

    // base case
    if(i == n)
        return;
    
    // processing
    cout << arr[i] << " ";

    // recursive relation
    print(arr, n, i+1); 
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;

    print(arr, n, i);


    return 0;
}