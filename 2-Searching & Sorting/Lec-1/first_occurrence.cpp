#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> arr, int target) {

    int s = 0;
    int e = arr.size() - 1;

    int ans = -1;

    while(s <= e) {

        int mid = s + (e - s) / 2;

        if(arr[mid] == target) {
            // ans store
            ans = mid;
            // search for left most occurrence
            e = mid - 1;
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
    return ans;
}

int main()
{
    vector<int> arr = {1,3,4,4,4,4,6,7};
    int target = 4;

    int ans = firstOccurrence(arr, target);
    cout << "First Occurrence = " << ans << endl;

    // First Occurrence in STL
    // auto ans1 = lower_bound(arr.begin(), arr.end(), target);
    // cout << "First occurrence = " << ans1 - arr.begin() << endl;

    return 0;
}