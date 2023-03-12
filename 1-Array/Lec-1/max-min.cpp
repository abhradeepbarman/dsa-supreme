#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 1, 6, 8, 9, 0};
    int n = sizeof(arr) / sizeof(int);

    // BEST PRACTICE: initialize maxi with minimum possible int value
    // BEST PRACTICE: initialize mini with maximum possible int value

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i=0; i<n; i++) {

        if(arr[i] > maxi) 
            maxi = arr[i];
        
        if(arr[i] < mini)
            mini = arr[i];
    }

    cout << "Maximum number = " << maxi << endl;
    cout << "Minimum number = " << mini << endl;

    return 0;
}