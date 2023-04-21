#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
        
    //base case
    if(n == 0 || n == 1)
        return 1;
    
    // recursive relation
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;

    int ans = climbStairs(n);
    cout << "answer = " << ans << endl;


    return 0;
}