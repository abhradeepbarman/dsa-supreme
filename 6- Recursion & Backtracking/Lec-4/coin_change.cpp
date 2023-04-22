#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int target) {

    //base case:
    // If target is zero, no coins are needed.
    if(target == 0) {
        return 0;
    }

    // If target is negative, this combination of coins is invalid.
    if(target < 0) {
        return INT_MAX;
    }

    // let's solve 1 case
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++) {

        int ans = solve(arr, target - arr[i]);
        
        if(ans != INT_MAX)
            mini = min(mini, 1 + ans);
    }

    return mini;
}

int main()
{
    vector<int> arr = {1,2};
    int target = 5;

    int ans = solve(arr, target);
    cout << "answer = " << ans << endl;

    return 0;
}