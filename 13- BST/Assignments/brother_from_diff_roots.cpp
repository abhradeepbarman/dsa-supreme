#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution
{
public:
    int countPairs(Node* root1, Node* root2, int x)
    {
        int ans = 0;
        stack<Node*> s1, s2;
        Node* a = root1;
        Node* b = root2;
        
        while(1) {
            while(a) {
                //inorder
                s1.push(a);
                a = a->left;
            }
            
            while(b) {
                //reverse inorder
                s2.push(b);
                b = b->right;
            }
            
            if(s1.empty() || s2.empty()) {
                break;
            }
            
            auto aTop = s1.top();
            auto bTop = s2.top();
            
            int sum = aTop->data + bTop->data;
            
            if(sum == x) {
                ans++;
                s1.pop();
                s2.pop();
                a = aTop->right;
                b = bTop->left;
            }
            else if(sum < x) {
                s1.pop();
                a = aTop->right;
            }
            else {
                s2.pop(); 
                b = bTop->left;
            }
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}