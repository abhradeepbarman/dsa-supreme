#include<bits/stdc++.h>
using namespace std;

int main()
{
    // declare 2D array
    int arr[3][3];

    // initialisation
    int brr[3][3] = {
        {1, 2, 3},
        {4 ,5 ,6},
        {7 ,8 ,9}
    };

    // input
    // cout << "Enter array element: " << endl;
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin >> arr[i][j];
    //     }
    // }


    // output
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // row-wise print
    cout << "printing row wise: " << endl;
    for(int i=0; i<3; i++) {

        for(int j=0; j<3; j++) {

            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // col-wise print
    cout << "printing col-wise: " << endl;
    for(int i=0; i<3; i++) {

        for(int j=0; j<3; j++) {

            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;



    return 0;
}