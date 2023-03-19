#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target) {

    int s = 0;
    int e = arr.size() - 1;

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
    vector<int> arr = {2, 4, 6, 8, 10, 12, 16};
    int target = 8;

    int indexOfTarget = binarySearch(arr, target);

    if(indexOfTarget == -1) 
        cout << "Target not found!" << endl;
    else 
        cout << "Target found at " << indexOfTarget << endl;

    return 0;
}