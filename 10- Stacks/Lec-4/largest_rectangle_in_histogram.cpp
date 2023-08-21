#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerElement(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);

        vector<int> ans(arr.size());

        for(int i=arr.size()-1; i>=0; i--) {
            int curr = arr[i];

            //aapka ans stack me hai
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }   

            //smaller element mil chuka hai
            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    vector<int> leftSmaller(vector<int> a, int n){
        stack<int> s;
        s.push(-1);
        
        vector<int> ans(n);
        
        //left to right
        for(int i=0; i<n; i++) {
            int curr = a[i];
            
            while(s.top() != -1 && a[s.top()] >= curr) {
                s.pop();
            }
            
            ans[i] = s.top();
            s.push(i);
        }
        
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int largestArea = INT_MIN;
        
        vector<int> next(heights.size());
        next = nextSmallerElement(heights, heights.size());

        vector<int> prev(heights.size());
        prev = leftSmaller(heights, heights.size());

        for(int i=0; i<heights.size(); i++) {
            int l = heights[i];

            if(next[i] == -1) {
                next[i] = heights.size();
            }

            int b = next[i] - prev[i] - 1;

            int area = l * b;
            largestArea = max(largestArea, area);
        }

        return largestArea;
    }
};

int main()
{
    
    return 0;
}