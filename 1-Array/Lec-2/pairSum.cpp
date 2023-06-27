#include<bits/stdc++.h>
using namespace std;

// PROBLEM: Pair Sum

int main()
{
    vector<int> arr = {1, 3, 5, 7, 2, 4, 6};
    int target = 9;

    // print all pairs
    // for(int i=0; i<arr.size(); i++) {
        
    //     for(int j=i+1; j<arr.size(); j++) {

    //         cout << "(" << arr[i] << ", " << arr[j] << ") ";
    //     }
    //     cout << endl;
    // }



    //BRUTE FORCE APPROACH
    // outer loop will traverse on each element
    for(int i=0; i<arr.size(); i++) {
        
        // for each element, will traverse on aage vala element     
        for(int j=i+1; j<arr.size(); j++) {
            

            if(arr[i] + arr[j] == target)
                cout << arr[i] << " " << arr[j] << endl;
        }
    }
    


    return 0;
}