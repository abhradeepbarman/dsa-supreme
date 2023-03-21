#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[][4], int n, int m, int target) {
    // n --> rows 
    // m --> cols

    int s = 0;
    int e = n*m - 1;

    while(s <= e) {

        int mid = s + (e-s)/2;
        
        int rowIndex = mid / m;
        int colIndex = mid % m;

        if(arr[rowIndex][colIndex] == target) {
            // element found
            return true;
        }
        else if(arr[rowIndex][colIndex] < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    // element not found
    return false;
}

int main()
{
    int arr[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int rows = 5;
    int cols = 4;

    int target = 1;

    bool ans = binarySearch(arr, rows, cols, target);

    if(ans) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}