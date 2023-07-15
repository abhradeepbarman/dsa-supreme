#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int sum, int& maxi, int i) {

    //base case
    if(i >= arr.size()) {
        maxi = max(maxi, sum);
        return;
    }

    //exclude
    solve(arr, sum, maxi, i+1);

    //include
    sum += arr[i];
    solve(arr, sum, maxi, i+2);
}

int main()
{
    vector<int> arr = {2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;

    solve(arr, sum, maxi, i);

    cout << "maximum sum = " << maxi << endl;
    
    return 0;
}