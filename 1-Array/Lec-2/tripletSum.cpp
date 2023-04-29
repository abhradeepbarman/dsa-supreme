#include<bits/stdc++.h>
using namespace std;

// PROBLEM: Triplet Sum

int main()
{
    vector<int> arr= {12,3,7,1,6,9};
    int n = arr.size();
    int target  = 24;

    // print all triplets
    // for(int i=0; i<arr.size(); i++) {
    //     for(int j=i+1; j<arr.size(); j++) {
    //         for(int k=j+1; k<arr.size(); k++) {
    //             cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ") ";
    //         }
    //     }
    //     cout << endl;
    // }




    //BRUTE FORCE APPROACH
    // for(int i=0; i<arr.size(); i++) {

    //     for(int j=i+1; j<arr.size(); j++) {

    //         for(int k=j+1; k<arr.size(); k++) {

    //             if(arr[i] + arr[j] + arr[k] == target)
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    
    //         }
    //     }
    // }




    //OPTIMAL SOLUTION (Two pointer)
    sort(arr.begin(), arr.end());

    for(int i=0; i<n-2; i++) {

        int s = i+1;
        int e = n-1;

        while(s < e) {
            int sum = arr[i] + arr[s] + arr[e];

            if(sum == target) {
                cout << arr[i] << " " << arr[s] << " " << arr[e] << endl;
                s++, e--;
            }
            else if(sum < target) {
                s++;
            }
            else {
                e--;
            }
        }
    }

    return 0;
}