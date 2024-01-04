#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int i, int j) {
    //base case
    if( i> j)
        return;

    cout << arr[i] << " ";

    print(arr, i+1, j);
}

void printSubarray_util(int arr[], int size, int i, int j) {
    //base case
    if(j == size)
        return;

    print(arr, i, j);
    cout << endl;

    printSubarray_util(arr, size, i, j+1);
}

void printSubarray(int arr[], int size, int i) {
    //base case
    if(i == size)
        return;

    printSubarray_util(arr, size, i, i);
    printSubarray(arr, size, i+1);
}



int main()
{
    int arr[] = {1,2,3, 4};
    int i = 0;
    int size = sizeof(arr) / sizeof(int);

    printSubarray(arr, size, i);

    return 0;
}