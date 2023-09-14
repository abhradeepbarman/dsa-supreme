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
    string reorganizeString(string s) {
        
        //create mapping
        int freq[26] = {0};

        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            freq[ch - 'a']++;
        }

        //max Heap create
        priority_queue<Node, vector<Node>, compare> maxHeap;

        for(int i=0; i<26; i++) {
            if(freq[i] != 0) {
                Node temp(i+'a', freq[i]);
                maxHeap.push(temp);
            }
        }

        string ans = "";

        while(maxHeap.size() > 1) {
            Node first = maxHeap.top();
            maxHeap.pop();

            Node second = maxHeap.top();
            maxHeap.pop();

            ans += first.ch;
            ans += second.ch;

            first.count--;
            second.count--;

            if(first.count != 0)    
                maxHeap.push(first);
            if(second.count != 0)   
                maxHeap.push(second);
        }

        if(maxHeap.size() == 1) {
            Node temp = maxHeap.top();
            maxHeap.pop();

            if(temp.count == 1)
                ans += temp.ch;
            else
                return "";
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}