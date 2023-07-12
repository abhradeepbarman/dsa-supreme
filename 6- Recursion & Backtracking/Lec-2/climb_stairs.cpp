#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {

    //Base case - stopping condition
    if(n == 0 || n == 1) 
        return 1;

    //recursive relation
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int ans = climbStairs(n);
    cout << "Total no. of ways = "<< ans << endl;
    
    return 0;
}