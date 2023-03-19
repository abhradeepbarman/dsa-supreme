#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> arr) {

    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while(s <= e) {

        int mid = s + (e-s)/2;

        // 1-based indexing
        // check if (element == index) or not
        if(arr[mid] != mid + 1) {
            // if element does not match with index, store index
            ans = mid + 1;
            // search for left-most element which does not match with index
            e = mid - 1;
        }
        else {
            // element matches with index
            // search in right
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8};

    int missingNumber = findMissing(arr);
    cout << "Missing number = " << missingNumber << endl;

    return 0;
}