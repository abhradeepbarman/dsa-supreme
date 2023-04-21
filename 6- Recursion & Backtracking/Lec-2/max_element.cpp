#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi) {

    //base case
    if(i == n)
        return;
    
    // processing
    if(arr[i] > maxi)
        maxi = arr[i];
    
    // recursive relation
    findMax(arr, n, i+1, maxi);
}

int main()
{
    int arr[] = {10,20,12,19,17,11};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    int maxi = INT_MIN;

    findMax(arr, n, i, maxi);

    cout << "max element = " << maxi << endl;

    return 0;
}