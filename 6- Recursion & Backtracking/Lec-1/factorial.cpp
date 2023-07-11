#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {

    //base case
    if(n == 0) 
        return 1;

    //recursive relation
    int ans = n * factorial(n-1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = factorial(n);
    cout << n << "! = " << ans << endl;
    
    return 0;
}