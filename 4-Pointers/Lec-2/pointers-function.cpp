#include<bits/stdc++.h>
using namespace std;


int getSum(int *arr, int n) {
    
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    return sum;
}

void solve(int *arr) {

    cout << arr << endl;
    cout << &arr << endl;

    
    arr[0] = 50;
    cout << "size inside solve function: " << sizeof(arr) << endl;
}


//ATTENTION: Pass by Value
void update(int* p) {

    *p = *p + 10;
}


int main()
{


    // int value = 5;
    // int* p = &value;

    // cout << "value of a: " << value << endl;
    // update(p);
    // cout << "value of a: " << value << endl;





    // int arr[10] = {1,2,3,4};

    // cout << "size inside main: " << sizeof(arr) << endl;

    // cout << arr << endl;
    // cout << &arr << endl;

    // // printing array inside main
    // for(int i=0; i<10; i++) {
    //     cout << arr[i] << " ";
    // } 
    // cout << endl;

    // cout << endl << "Now calling solve function: " << endl;

    // solve(arr);

    // cout << "return to main function" << endl;

    // // printing array inside main
    // for(int i=0; i<10; i++) {
    //     cout << arr[i] << " ";
    // } 




    
    // int arr[6] = {1,2,3,4,5,6};
    // int n = sizeof(arr) / sizeof(int);
    // cout << getSum(arr+3, 3);


    return 0;
}