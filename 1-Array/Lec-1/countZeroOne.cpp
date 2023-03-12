#include<bits/stdc++.h>
using namespace std;

// PROBLEM: count number of 0's and 1's in the array

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(int);

    int countZero = 0;
    int countOne = 0;

    for(int i=0; i<n; i++) {
        
        if(arr[i] == 0) 
            countZero++;

        if(arr[i] == 1)
            countOne++;

    }    

    cout << "Number of zeroes = " << countZero << endl;
    cout << "Number of ones = " << countOne << endl;

    return 0;
}