#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,4,6};
    vector<int> brr = {3,5,7,9,11};

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i<arr.size() && j<brr.size()) {

        if(arr[i] < brr[j]) {
            ans.push_back(arr[i]);
            i++;
        }
        else if(brr[j] < arr[i]) {
            ans.push_back(brr[j]);
            j++;
        }
        else {
            ans.push_back(arr[i]);
            i++;
        }
    }

    while(i < arr.size()) {
        ans.push_back(arr[i]);
        i++;
    }

    while(j < brr.size()) {
        ans.push_back(brr[j]);
        j++;
    }

    //print ans 
    for(int i: ans) {
        cout << i << " ";
    }
    
    return 0;
}