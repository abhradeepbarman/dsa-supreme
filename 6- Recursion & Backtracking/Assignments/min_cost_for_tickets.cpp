#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& days, vector<int>& costs, int index) {

        //base case
        if(index >= days.size()) {
            return 0;
        }

        //1 day pass
        int option1 = costs[0] + solve(days, costs, index+1);

        //7 day pass
        int i = index;
        while(i<days.size() && days[i] < days[index]+7) {
            i++;
        }
        int option2 = costs[1] + solve(days, costs, i);

        //30 days pass
        int j = index;
        while(j<days.size() && days[j] < days[index]+30) {
            j++;
        }
        int option3 = costs[2] + solve(days, costs, i);

        return min(option1, min(option2, option3));
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return solve(days, costs, 0);
    }
};

int main()
{
    
    return 0;
}