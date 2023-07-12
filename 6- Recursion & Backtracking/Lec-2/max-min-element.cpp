#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi) {

    //base case
    if(i == n)
        return;

    //processing
    if(arr[i] > maxi)
        maxi = arr[i];

    //R.R
    findMax(arr, n, i+1, maxi);
}

void findMin(int arr[], int n, int i, int& mini) {

    //base case
    if(i == n)
        return;

    //processing
    if(arr[i] < mini)
        mini = arr[i];

    //R.R
    findMin(arr, n, i+1, mini);
}

int main()
{
    int arr[] = {20, 50, 40, 10, 30};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    
    int maxi = INT_MIN;
    int mini = INT_MAX;

    findMax(arr, n, i, maxi);
    findMin(arr, n, i, mini);

    cout << "max element = " << maxi << endl;
    cout << "min element = " << mini << endl;

    return 0;
}