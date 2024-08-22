#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    //copy values
    int k = s;
    for(int i=0; i<len1; i++) {
        left[i] = arr[k++];
    }

    k = mid + 1;
    for(int i=0; i<len2; i++) {
        right[i] = arr[k++];
    }

    //merge 2 sorted arrays
    int i = 0;  //left array index
    int j = 0;  //right array index
    k = s;      //main array index

    while(i<len1 && j<len2) {
        if(left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }

    while(i < len1) {
        arr[k++] = left[i++];
    }

    while(j < len2) {
        arr[k++] = right[j++];
    }

    // delete left & right newly created array
    delete [] left;
    delete [] right;
}

void mergeSort(int arr[], int s, int e) {

    //base case
    //s == e --> single element
    //s > e --> invalid array
    if(s >= e)  
        return;

    int mid = s+ (e-s)/2;

    //left part sort kardo
    mergeSort(arr, s, mid);   

    //right part sort kardo
    mergeSort(arr, mid+1, e);   

    //now merge 2 sorted arrays
    merge(arr, s, e);
}

int main()
{
    int arr[] = {4,5,13,2,12,13,2};
    int n = sizeof(arr) / sizeof(int);

    int s = 0;
    int e = n-1;
    
    mergeSort(arr, s, e);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}