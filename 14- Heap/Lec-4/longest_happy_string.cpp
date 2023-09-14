#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    char ch;
    int count;

    Node(int ch, int count) {
        this->ch = ch;
        this->count = count;
    }
};

class compare {
    public:
    bool operator()(Node a, Node b) {
        return a.count < b.count;
    }
};

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        
        priority_queue<Node, vector<Node>, compare> maxHeap;

        if(a > 0) {
            Node temp('a', a);
            maxHeap.push(temp);
        }
        if(b > 0) {
            Node temp('b', b);
            maxHeap.push(temp);
        }
        if(c > 0) {
            Node temp('c', c);
            maxHeap.push(temp);
        }

        string ans = "";

        while(maxHeap.size() > 1) {
            Node first = maxHeap.top();
            maxHeap.pop();

            Node second = maxHeap.top();
            maxHeap.pop();

            if(first.count >= 2) {
                ans += first.ch;
                ans += first.ch;

                first.count -= 2;
            }
            else {
                ans += first.ch;
                first.count--;
            }

            if(second.count >= 2 && second.count >= first.count) {
                ans += second.ch;
                ans += second.ch;

                second.count -= 2;
            }
            else {
                ans += second.ch;
                second.count--;
            }

            if(first.count > 0)
                maxHeap.push(first);
            if(second.count > 0)
                maxHeap.push(second);
        }

        if(maxHeap.size() == 1) {
            Node temp = maxHeap.top();
            maxHeap.pop();

            if(temp.count >= 2) {
                ans += temp.ch;
                ans += temp.ch;

                temp.count -= 2;
            }
            else {
                ans += temp.ch;
                temp.count--;
            }
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}