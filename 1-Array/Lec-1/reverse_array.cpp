#include<bits/stdc++.h>
using namespace std;

// PROBLEM: Reverse array
// i/p --> {1, 2, 3, 4, 5}
// o/p --> {5, 4, 3, 2, 1}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    int s = 0;
    int e = n-1;

    while(s <= e) {
        swap(arr[s], arr[e]);
        s++, e--;
    }

    // printing the array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}