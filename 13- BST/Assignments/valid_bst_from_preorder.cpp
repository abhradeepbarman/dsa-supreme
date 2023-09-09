#include<bits/stdc++.h>
using namespace std;

void build(vector<int>& A, int min, int max, int &i) {
    if(i >= A.size()) {
        return;
    }
    
    if(A[i] > min && A[i] < max) {
        int rootData = A[i++];
        build(A, min, rootData, i);
        build(A, rootData, max, i);
    }
}

int solve(vector<int> &A) {
    int min = INT_MIN, max = INT_MAX;
    int i = 0;
    
    build(A, min, max, i);
    
    return i == A.size(); 
}

int main()
{
    
    return 0;
}