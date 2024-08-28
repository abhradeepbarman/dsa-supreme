#include<bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& arr, int& n, int& ans, int currNum) {
        // base case
        if(currNum > n) {
            ans++;
            return;
        }

        for (int i = 1; i <= n; i++) {
            if (arr[i] == 0 && (currNum % i == 0 || i % currNum == 0)) {
                // empty place
                arr[i] = currNum;
                solve(arr, n, ans, currNum+1);
                arr[i] = 0;
            }
        }
    }

public:
    int countArrangement(int n) {
        vector<int> arr(n + 1);
        int ans = 0;
        solve(arr, n, ans, 1);
        return ans;
    }
};

int main()
{
    
    return 0;
}