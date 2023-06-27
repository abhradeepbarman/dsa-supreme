#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int target) {

    for(int i=0; i<n; i++) {

        if(arr[i] == target) 
            return true;
    }
    return false;
}

int main()
{   
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    int target = 11;

    bool ans = linearSearch(arr, n, target);

    if(ans) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    
    return 0;
}