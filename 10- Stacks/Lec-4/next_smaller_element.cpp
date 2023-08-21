#include<bits/stdc++.h>
using namespace std;

#include<stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(arr.size());

    for(int i=arr.size()-1; i>=0; i--) {
        int curr = arr[i];

        //aapka ans stack me hai
        while(s.top() >= curr) {
            s.pop();
        }   

        //smaller element mil chuka hai
        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}

int main()
{
    
    return 0;
}