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
    for(int i=0; i<arr.size(); i++) {

        for(int j=i+1; j<arr.size(); j++) {

            for(int k=j+1; k<arr.size(); k++) {

                if(arr[i] + arr[j] + arr[k] == target)
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    
            }
        }
    }

    return 0;
}