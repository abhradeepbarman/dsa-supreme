#include<bits/stdc++.h>
using namespace std;

// Brute-Force Approach
int maxProfit(vector<int>& arr) {
    int n = arr.size();
    int profit = 0;
    int maxProfit = 0;

    for(int i=0; i<n-1; i++) {

        for(int j=i+1; j<n; j++) {

            profit = arr[j] - arr[i];
            maxProfit = max(profit, maxProfit);
        }
    }   

    return maxProfit;
}



// Optimal Approach:
// int maxProfit(vector<int> arr) {

//     int mini = INT_MAX;
//     int profit = 0;
//     int maxProfit = 0;

//     for(int i=0; i<arr.size(); i++) {

//         // minimum price 
//         mini = min(mini, arr[i]);

//         // calculate profit 
//         profit = arr[i] - mini;

//         // check if the profit is greater
//         maxProfit = max(maxProfit, profit);
//     }

//     return maxProfit;
// }

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    // taking input
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max Profit = " << maxProfit(arr) << endl;


    return 0;
}