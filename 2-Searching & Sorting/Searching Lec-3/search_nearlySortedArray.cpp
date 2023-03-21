#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target) {

    int s = 0;
    int e = arr.size() - 1;

    while(s <= e) {

        int mid = s + (e - s) / 2;

        if(arr[mid] == target) {
            return mid;
        }
        if( mid-1 >= s && arr[mid - 1] == target) {
            return mid - 1;
        }
        if( mid+1 <= e && arr[mid + 1] == target) {
            return mid + 1;
        }
        else if(arr[mid] < target) {
            s = mid + 2;
        }
        else {
            e = mid - 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 70;

    int ans = binarySearch(arr, target);
    cout << target << " is at = " << ans << endl;

    return 0;
}