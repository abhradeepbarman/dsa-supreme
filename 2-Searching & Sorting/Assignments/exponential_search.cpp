#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int target) {

    while(s <= e) {

        int mid = s + (e - s) / 2;

        if(arr[mid] == target) {
            // target found
            return mid;
        }
        else if(arr[mid] < target) {
            // search in right
            s = mid + 1;
        }
        else {
            // search in left
            e = mid - 1;
        }
    }

    // element not found
    return -1;
}

int main()
{
    vector<int> arr = {0,2,4,6,8,10,12,14};
    int target = 4;


    //first find the range
    // start with box Size = 2
    int s = 0;
    int e = 1;

    int boxSize = 2;

    //condition for target to lie in the range
    while(arr[e] < target) {
        s = e+1;
        // double the box size
        boxSize *= 2;
        e = e + boxSize;
    }


    //now apply Binary Seach
    int pos = binarySearch(arr, s, e, target);

    if(pos != -1) { 
        cout << "element found at index = " << pos << endl;
    }
    else {
        cout << "element not found!" << endl;
    }


    return 0;
}