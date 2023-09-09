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
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> ans; //stores sorted elements of both the tress
        stack<Node*> sa, sb;
        Node* a = root1;
        Node* b = root2;
        
        while(a || b || !sa.empty() || !sb.empty()) {
            while(a) {
                sa.push(a);
                a = a->left;
            }
            
            while(b) {
                sb.push(b);
                b = b->left;
            }
            
            if(sb.empty() || (!sa.empty() && sa.top()->data <= sb.top()->data)) {
                auto atop = sa.top();
                ans.push_back(atop->data);
                sa.pop();
                a = atop->right;
            }
            else {
                auto btop = sb.top();
                sb.pop();
                ans.push_back(btop->data);
                b = btop->right;
            }
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}