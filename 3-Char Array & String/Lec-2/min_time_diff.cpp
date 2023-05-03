#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        //STEP 1: Convert time string into minutes integer array
        vector<int> minutes;

        for(int i=0; i<timePoints.size(); i++) {
            string curr = timePoints[i];

            int hours = stoi(curr.substr(0,2));
            int mins = stoi(curr.substr(3,2));
            int total_minutes = hours*60 + mins;

            minutes.push_back(total_minutes);
        }

        //STEP 2: sort array
        sort(minutes.begin(), minutes.end());

        //STEP 3: find minimum difference
        int mini = INT_MAX;
        int n = minutes.size();

        for(int i=0; i<n-1; i++) {
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini, diff);
        }

        // something missing here - THIS IS THE GAME
        int lastDiff = (minutes[0] + 1440) - minutes[n-1];
        mini = min(mini, lastDiff);

        return mini;
    }
};

int main()
{
    
    return 0;
}