#include<bits/stdc++.h>
using namespace std;

void solve(queue<int>& q, int k) {
    
    stack<int> s;
    int n = q.size();

    if(k <= 0 || k > n) {
        return;
    }

    //insert first k elements into stack
    int count = 0;
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k)
            break;
    }

    //now insert stack elements into q
    while(!s.empty()) {
        int element = s.top();
        s.pop();

        q.push(element);
    }

    //now push n-k elements from q front to back
    count = 0;
    while(!q.empty() && n-k != 0) {
        int element = q.front();
        q.pop();
        q.push(element);
        count++;

        if(count == n-k)
            break;
    }
}

int main()
{
    queue<int> q;
    int k = 3;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);

    solve(q, k);


    //print queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}