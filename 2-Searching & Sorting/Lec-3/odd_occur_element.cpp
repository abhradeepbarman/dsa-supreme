#include<bits/stdc++.h>
using namespace std;

int findOddOccur(vector<int> arr) {

    int s = 0;
    int e = arr.size()-1;

    // if only one element is present
    if(s == e) 
        return s;

    while(s < e) {
        int mid = s + (e - s) / 2;

        // even index
        if(mid % 2 == 0) {
            if(arr[mid] == arr[mid + 1]) {
                s = mid + 2;
            }
            else {
                e = mid;
            }
        }

        // odd index
        else {
            if(arr[mid - 1] == arr[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
    return s;
}

int main()
{
    vector<int> arr = {1,1,2,2,3,3,4,4,5,6,6};

    int ans = findOddOccur(arr);
    cout << "Odd occuring element = " << arr[ans] << endl;

    return 0;
}