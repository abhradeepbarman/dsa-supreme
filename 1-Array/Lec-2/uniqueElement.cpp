#include<bits/stdc++.h>
using namespace std;

// Find unique Element
// every element occurs twice except one element

int findUnique(vector<int> arr) {

    // Approach: XOR every element

    int ans = 0;

    for(int i=0; i<arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements: ";
    
    // taking input
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique element = " << uniqueElement << endl;
    
    return 0;
}