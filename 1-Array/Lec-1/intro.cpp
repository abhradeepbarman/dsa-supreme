#include<bits/stdc++.h>
using namespace std;

int main()
{
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