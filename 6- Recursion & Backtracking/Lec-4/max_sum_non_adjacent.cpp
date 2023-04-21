#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int i, int sum) {

    //base case
    if(i >= arr.size()) {
        return sum;
    }

    // exclude
    int a = solve(arr, i+1, sum);


    //include
    int b = solve(arr, i+2, sum + arr[i]);

    return max(a, b); 
}

int main()
{
    vector<int> arr = {2,1,4,9};
    int i = 0;
    int sum = 0;

    int ans = solve(arr, i, sum);
    cout << "answer = " << ans << endl;

    return 0;
}