#include<bits/stdc++.h>
using namespace std;

void printColSum(int arr[][3],int rows,int cols) {

    for(int i=0; i<3; i++) {
        int sum = 0;

        for(int j=0; j<3; j++) {

            sum += arr[j][i];
        }

        cout << sum << endl;
    }    
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

    // print col sum
    printColSum(arr, rows, cols);

    return 0;
}