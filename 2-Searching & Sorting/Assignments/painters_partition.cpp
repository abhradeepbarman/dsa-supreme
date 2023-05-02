#include<bits/stdc++.h>
using namespace std;

bool possibleSolution(vector<int> &boards, int k, int mid) {
    int painterCount = 1;
    int boardsCount = 0;

    for(int i=0; i<boards.size(); i++) {
        if(boardsCount + boards[i] <= mid) {
            boardsCount += boards[i];
        }
        else {
            painterCount++;
            if(painterCount>k || boards[i] > mid) {
                return false;
            }
            boardsCount = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int ans = -1;
    int sum=0;
    for(auto i: boards) {
        sum += i;
    }
    int s=0;
    int e=sum;

    while(s <= e) {
        int mid = s+(e-s)/2;

        if(possibleSolution(boards,k,mid)) {
            ans = mid;
            e = mid-1;
        }
        else {
            s =mid+1;
        }
    }
    return ans;
}

int main()
{
    
    return 0;
}