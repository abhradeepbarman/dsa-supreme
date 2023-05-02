#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long int> arr,long long int n,long long int m,long long int mid) {

    long long int woodCount = 0;

    for(int i=0; i<n; i++) {

        if(arr[i] - mid > 0) {
            woodCount += arr[i] - mid;
        }
    }

    return woodCount >= m;
}

long long int solve(vector<long long int> arr,long long int n,long long int m) 
{
    long long int maxi = *max_element(arr.begin(), arr.end());

    long long int s = 0;
    long long int e = maxi;
    long long int ans = -1;

    while(s <= e) {
        long long int mid = s + (e-s) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    
    return ans;
}

int main()
{
    long long int n, m;
    cin >> n >> m;

    vector<long long int> arr;
    for(int i=0; i<n; i++) {
        long long int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    long long int ans = solve(arr,n,m);
    cout << ans;
    
    return 0;
}