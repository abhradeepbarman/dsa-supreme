#include<bits/stdc++.h>
using namespace std;

// PROBLEM: Wave Print a Matrix

int main()
{
    vector<vector<int>> arr = {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}
    };

    int rows = arr.size();
    int cols = arr[0].size();

    for(int j=0; j<cols; j++) {

        if(j%2 == 0) {
            for(int i=0; i<rows; i++) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for(int i=rows-1; i>=0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }


    return 0;
}