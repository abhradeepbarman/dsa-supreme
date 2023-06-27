#include<bits/stdc++.h>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;

    // size --> returns the number of elements
    // capacity --> returns the number of elements we can store in the vector

    // default size of vector --> 0
    // default capacity of vector --> 0
    cout << arr.size() << endl;   
    cout << arr.capacity() << endl;  

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove
    arr.pop_back();

    // print
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // when the size of vector explicitly mentioned, all the elements will be initialized with 0 
    vector<int> brr(10);
    cout << "Size of brr = " << brr.size() << endl;
    cout << "Capacity of brr = " << brr.capacity() << endl;

    // print
    for(int i=0; i<brr.size(); i++) {
        cout << brr[i] << " ";
    }
    cout << endl;


    // initiaizing all elements with same value
    vector<int> crr(10, -1);

    // print
    for(int i=0; i<crr.size(); i++) {
        cout << crr[i] << " ";
    }
    cout << endl;

    // another way to initialize vector
    vector<int> drr = {10, 20, 30, 40};

    // print
    for(int i=0; i<drr.size(); i++) {
        cout << drr[i] << " ";
    }
    cout << endl;


    // empty --> if the vector is empty return 1, otherwise 0
    cout << "drr is empty or not = " << drr.empty() << endl;



    return 0;
}