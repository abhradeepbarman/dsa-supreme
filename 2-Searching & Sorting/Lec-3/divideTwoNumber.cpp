#include<bits/stdc++.h>
using namespace std;

int divideTwoNumber(int dividend, int divisor) {

    int s = 0;
    int e = abs(dividend);

    int ans = 0;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        // perfect solution
        if( abs(mid * divisor) == abs(dividend)) {
            ans = mid;
            break;
        }
        // not perfect solution
        else if( abs(mid * divisor) < abs(dividend)) {
            // this can be a possible answer
            ans = mid;
            // but still search in right
            s = mid + 1;
        }
        else {
            // search left
            e = mid - 1;
        }
    }

    // if one of them is negative, answer will be negative
    if((divisor>0 && dividend>0) || (divisor<0 && dividend<0))
        return ans;
    else 
        return -ans;
}

int main()
{
    int dividend = -18;
    int divisor = -7;

    double ans = divideTwoNumber(dividend, divisor);
    cout << "ans = " << ans << endl;


    // factorial part
    int precision;
    cout << "Enter the precision: ";
    cin >> precision;

    double step = 0.1;
    for(int i=0; i<precision; i++) {

        for(double j = abs(ans); j*abs(divisor) < abs(dividend); j += step) {
            // ans store
            ans = j;
        }

        step /= 10;
    }

    // if one of them is negative, answer will be negative
    if((divisor>0 && dividend>0) || (divisor<0 && dividend<0))
        cout << "Exact ans = " << ans << endl;
    else 
        cout << "Exact ans = " << (-ans) << endl;

    return 0;
}