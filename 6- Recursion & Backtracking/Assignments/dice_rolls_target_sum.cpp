#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        
        //base case
        if(target < 0)  return 0;
        if(n == 0 && target != 0)   return 0;
        if(target == 0 && n != 0)   return 0;
        if(n == 0 && target == 0)   return 1;

        int ans = 0;
        for(int i=1; i<=k; i++) {
            ans = ans + numRollsToTarget(n-1, k, target-i);
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}