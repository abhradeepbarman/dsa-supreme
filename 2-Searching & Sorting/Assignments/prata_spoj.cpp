#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int p, int mid) {

    int prataCount = 0;

    for(int i=0; i<n; i++) {

        int timeCount = 0;

        for(int j=1; timeCount + j*arr[i] <= mid; j++) {

            prataCount++;
            timeCount += j*arr[i];
        }
    }
    return prataCount >= p;
}

int solve(vector<int> arr, int n, int p)
{
    int maxi = *max_element(arr.begin(), arr.end());

    int s = 0;
    int e = maxi * (p*(p+1)) / 2;
    int ans = -1;

    while(s <= e) {
        int mid = s + (e-s) / 2;

        if(isPossible(arr,n,p,mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int testCase;
    cin >> testCase;

    for(int i=0; i<testCase; i++) {

        int p , n;
        cin >> p >> n;

        vector<int> arr;
        for(int i=0; i<n; i++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        int ans = solve(arr, n, p);
        cout << ans << endl;

    }
    
    return 0;
}