#include<bits/stdc++.h>
using namespace std;

// PROBLEM: Extreme Print
// i/p --> {1, 2, 3, 4, 5};
// o/p --> {1, 5, 2, 4, 3};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);   

    // Two Pointers Approach
    int s = 0;
    int e = n-1;

    while(s <= e) {

        if(s == e) {
            cout << arr[s] << " ";
        } else {
            cout << arr[s] << " " << arr[e] << " ";
        }
        s++, e--;
    }


    return 0;
}