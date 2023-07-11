#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {

    //Base case
    if(n == 1)  return 0;   //first term
    if(n == 2)  return 1;   //second term

    //recursive relation --> f(n) = f(n-1) + f(n-2)
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter term: ";
    cin >> n;

    int ans = fibo(n);
    cout << n << "th term = " << ans << endl;
    
    return 0;
}