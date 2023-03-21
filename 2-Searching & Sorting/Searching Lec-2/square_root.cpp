#include<bits/stdc++.h>
using namespace std;

int findSqrt(int n) {

    int s=0, e=n;
    int ans = -1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        // If x is a perfect square
        if(mid * mid == n) {
            return mid;
        }
        else if(mid * mid < n) {
            // ans store
            ans = mid;
            // search right
            s = mid + 1;
        }
        else {
            // search left
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    double ans = findSqrt(n);
    cout << "Square root = " << ans << endl;


    // Floating Point

    int precision;
    cout << "Enter the number of floating digits in precision: ";
    cin >> precision;

    double step = 0.1;

    for(int i=0; i<precision; i++) {

        for(double j=ans; j*j < n; j += step) {
            // ans store
            ans = j;
        }

        step = step / 10;
    }

    cout << "exact Square root = " << ans << endl;


    return 0;
}