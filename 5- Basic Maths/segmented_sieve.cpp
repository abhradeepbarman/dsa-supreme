#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> getSieve(int n) {
        vector<int> sieve(n+1, 1);
        sieve[0] = sieve[1] = 0;
        
        for(int i=2; i<=n; i++) {
            if(sieve[i] == 1) {
                for(int j=2*i; j<=n; j+=i) {
                    sieve[j] = 0;
                }
            }
        }
        return sieve;
    }
    
  public:
    int countPrimes(int L, int R) {
        vector<int> primes = getSieve(R);
        
        int cnt = 0;
        for(int i=0; i<primes.size(); i++) {
            cnt += primes[i];
            primes[i] = cnt;
        }
        
        return primes[R] - primes[L-1];
    }
};

int main()
{
    
    return 0;
}