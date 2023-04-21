#include<bits/stdc++.h>
using namespace std;

int expo(int n) {

    //base case
    if(n == 0)
        return 1;

    // recursive relation
    int ans = 2 * expo(n-1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter any number: ";    
    cin >> n;

    cout << "2^" << n << " = " << expo(n) << endl; 

    return 0;
}