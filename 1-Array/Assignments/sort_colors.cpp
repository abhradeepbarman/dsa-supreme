#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {0,1,1,2,0,2,1,0,1};
    int n = arr.size();

    int s = 0;
    int e = n-1;
    int i = 0;

    while(i != e) {

        if(arr[i] == 0) {
            swap(arr[s], arr[i]);
            s++, i++;
        }
        else if(arr[i] == 1) {
            i++;
        }
        else {
            swap(arr[i], arr[e]);
            e--;
        }
    }

    for(auto i: arr) {
        cout << i << " ";
    }
    
    return 0;
}