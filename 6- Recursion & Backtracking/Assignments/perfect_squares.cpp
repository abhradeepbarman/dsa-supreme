#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n) {
        //base case
        if(n == 0) {
            return 0;
        }

        int ans = n;
        for(int i=1; i*i <= n; i++) {
            ans = min(ans, 1 + solve(n - i*i));
        }

        return ans;
    }

    int numSquares(int n) {
        return solve(n);
    }
};

int main()
{
    
    return 0;
}