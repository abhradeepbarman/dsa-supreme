#include<bits/stdc++.h>
using namespace std;

// bool isPrime(int n) {

//     if(n <= 1)  return false;

//     for(int i=2; i<n; i++) {

//         if(n%i == 0) {
//             return false;
//         }
//     }
//     return true;
// }


//optimized
bool isPrime(int n) {

    if(n <= 1)  return false;

    int c = 2;
    
    while(c * c <= n) {

        if(n % c == 0) {
            return false;
        }
        c++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << "It is a Prime number" << endl;
    }    
    else {
        cout << "It is not a Prime number" << endl;
    }

    return 0;
}