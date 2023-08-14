#include<bits/stdc++.h>
using namespace std;

int slowExponentiation(int a, int b) {

    int ans = 1;
    for(int i=0; i<b; i++) {
        ans = ans * a;
    }

    return ans;
}  //O(b)


int fastExponentiation(int a, int b) {

    int ans = 1;

    while(b > 0) {

        if(b%2 != 0) {  //odd
            ans = ans * a;
        }
        
        a = a*a;
        b>>=1;  // b=b/2
    }
    return ans;

}  //O(logb )

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << "result: " << slowExponentiation(a,b) << endl;
    cout << "result: " << fastExponentiation(a,b) << endl;

    return 0;
}