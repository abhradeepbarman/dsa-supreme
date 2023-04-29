#include<bits/stdc++.h>
using namespace std;

// Brute-Force Approach
// int maxProfit(vector<int> arr) {
//     int profit = INT_MIN;
//     int maxProfit = INT_MIN;

//     for(int i=0; i<arr.size(); i++) {

//         for(int j=i+1; j<arr.size(); j++) {

//             profit = arr[j] - arr[i];

//             if(profit > maxProfit)
//                 maxProfit = profit;
//         }
//     }

//     if(maxProfit < 0)
//         maxProfit = 0;
    
//     return maxProfit;
// }



// Optimal Approach:
int maxProfit(vector<int> arr) {

    int mini = INT_MAX;
    int profit = 0;
    int maxProfit = 0;

    for(int i=0; i<arr.size(); i++) {

        // minimum price 
        mini = min(mini, arr[i]);

        // calculate profit 
        profit = arr[i] - mini;

        // check if the profit is greater
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

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