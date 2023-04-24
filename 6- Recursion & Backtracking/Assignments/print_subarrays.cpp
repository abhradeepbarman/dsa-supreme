#include<bits/stdc++.h>
using namespace std;

void printSubarrays_util(vector<int> arr, int n, int s, int e) {

    //base case
    if(e == n)
        return;
    
    //solve 1 case
    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // RR
    printSubarrays_util(arr, n, s, e+1);
}

void printSubarrays(vector<int> arr, int n, int i) {

    //base case
    if (i == n)
        return;
    
    printSubarrays_util(arr, n, i, i);

    printSubarrays(arr, n, i+1);
}

int main()
{
    vector<int> arr = {1,2,3};
    int n = arr.size();
    int i = 0;

    printSubarrays(arr, n, i);


    return 0;
}