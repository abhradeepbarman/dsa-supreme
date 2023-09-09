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

void solve(Node* root, unordered_map<int,bool>& visited, bool& ans) {
    //base case
    if(root == NULL) {
        return;
    }
    
    //visit the node
    visited[root->data] = true;
    if(root->left == NULL && root->right == NULL) {
        //Leaf Node
        int xp1 = root->data + 1;
        int xm1 = root->data - 1 == 0 ? root->data : root->data - 1;
        if(visited.find(xp1) != visited.end() && visited.find(xm1) != visited.end()) {
            //exists
            ans = true;
            return;
        }
     }
    
    solve(root->left, visited, ans);
    solve(root->right, visited, ans);
}

bool isDeadEnd(Node *root)
{
  bool ans = false;
  unordered_map<int,bool> visited;
  solve(root, visited, ans);
  
  return ans;
}

int main()
{
    
    return 0;
}