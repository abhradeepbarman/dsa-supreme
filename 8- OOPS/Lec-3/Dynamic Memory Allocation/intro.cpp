#include<bits/stdc++.h>
using namespace std;

int main()
{
    // variable initialization
    int* a = new int(5);
    cout << *a << endl;



    // 1-D array creation
    int n = 10;
    int* arr = new int[n];

    //de-allocation
    delete []arr;




    //2-D array creation
    int row = 3;
    int col = 4;

    int** brr = new int*[row];

    for(int i=0; i<row; i++) {
        brr[i] = new int[col];
    }

    //de-allocation
    for(int i=0; i<row; i++) {
        delete [] brr[i];
    }

    delete []brr;



    return 0;
}