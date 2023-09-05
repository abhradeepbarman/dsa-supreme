#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
};

vector<int> diagonal(Node *root)
{
    //METHOD 1:
    // int level = 0;
    // map<int,vector<int>> mp;
    
    // solve(root, level, mp);
    
    // vector<int> ans;
    // for(auto it: mp) {
    //     for(auto elements: it.second) {
    //         ans.push_back(elements);
    //     }
    // }
    // return ans;
    
    
    
    
    //Method 2:
    vector<int> ans;
    if(root == NULL)    return ans;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        while(temp != NULL) {
            ans.push_back(temp->data);
            if(temp->left) {
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
    return ans;
}

int main()
{
    
    return 0;
}