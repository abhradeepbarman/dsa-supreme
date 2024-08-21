#include<bits/stdc++.h>
using namespace std;

int numSquares(int n) {
    cout << n <<  endl;
    if(n == 0) {
        return 0;
    }

    int mini = INT_MAX;
    
    for(int i=1; i*i <= n; i++) {
        int ans = numSquares(n-(i*i));
        mini = min(mini, 1 + ans);
    }
    return mini;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "ans: " << numSquares(n);
    
    return 0;
}