#include<bits/stdc++.h>
using namespace std;

int main()
{
    //array declare
    // int arr[10];


    //base address
    // cout << arr << endl;
    // cout << &arr << endl;


    //initialization
    // int arr[] = {1,3,5,7,9};
    // int brr[5] = {1,3,5,7,9};
    // int crr[10] = {1,3,5,7,9};
    // int drr[3] = {1,3,5,7,9};   //error


    //BAD PRACTICE
    // int n;
    // cin >> n;
    // int arr[n];


    //print all elements
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }



    //taking array's elements as Input
    // int arr[5];

    // cout << "enter array elements: " << endl;
    // for(int i=0; i<5; i++) {
    //     cin >> arr[i];
    // }

    // cout << "printing array elements: " << endl;
    // for(int i=0; i<5; i++) {
    //     cout << arr[i] << " ";
    // }



    // initialize all elements with 0
    int arr[5] = {0};

    // printing the array
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    // initialize all elements with same value
    int brr[5];

    // Memset function
    memset(brr, -1, sizeof(brr));

    // printing the array
    for(int i=0; i<5; i++) {
        cout << brr[i] << " ";
    }
    cout << endl;
    

    return 0;
}