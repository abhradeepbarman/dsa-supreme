#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 6, 8, 10, 12, 16};
    int target = 4;

    bool ans = binary_search(arr.begin(), arr.end(), target);

    if(ans)
        cout << "Element found!" << endl;
    else 
        cout << "Element not found!" << endl;

    return 0;
}