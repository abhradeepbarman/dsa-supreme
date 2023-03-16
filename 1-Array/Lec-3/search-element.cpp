#include<bits/stdc++.h>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key) {

    for(int i=0; i<rows; i++) {

        for(int j=0; j<cols; j++) {

            if(arr[i][j] == key)
                return true;
        }
    }
    // key is not present
    return false;
}

int main()
{
    int arr[3][3] = {
        {1 ,2 ,3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    int key = 10;

    bool ans = findKey(arr, rows, cols, key);

    if(ans) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }


    return 0;
}