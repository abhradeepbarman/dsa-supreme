#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
    //create mapping
    //return target node
    Node* createMapping(Node* root, int target, 
                        map<Node*, Node*>& nodeToParent) {
        
        Node* res = NULL;
        nodeToParent[root] = NULL;
        
        //level order traversal
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* front = q.front();
            q.pop();
            
            //target node store
            if(front->data == target) {
                res = front;
            }
            
            if(front->left) {
                q.push(front->left);
                nodeToParent[front->left] = front;
            }
            if(front->right) {
                q.push(front->right);
                nodeToParent[front->right] = front;
            }
        }
        
        return res;
    }
    
    int burnTree(Node* root, map<Node*, Node*>& nodeToParent) {
        
        map<Node*, bool> visited;
        queue<Node*> q;
        
        q.push(root);
        visited[root] = true;
        
        int ans = 0;
        
        while(!q.empty()) {
            
            bool flag = false;
            int size = q.size();
            
            for(int i=0; i<size; i++) {
                //process neighboring nodes
                Node* front = q.front();
                q.pop();
                
                if(front->left && !visited[front->left]) {
                    flag = true;
                    q.push(front->left);
                    visited[front->left] = true;
                }
                if(front->right && !visited[front->right]) {
                    flag = true;
                    q.push(front->right);
                    visited[front->right] = true;
                }
                if(nodeToParent[front] && !visited[nodeToParent[front]]) {
                    flag = true;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = true;
                }
            }
            
            if(flag == true) {
                ans++;
            }
        }
        
        return ans;
    }
    
  public:
    int minTime(Node* root, int target) 
    {
        //algo:
        //step 1: create nodeToParent mapping
        //Step 2: find target Node
        //step 3: burn the tree in min time
        
        map<Node*, Node*> nodeToParent;
        Node* targetNode = createMapping(root, target, nodeToParent);
        
        int ans = burnTree(targetNode, nodeToParent);
        
        return ans;
    }
};

int main()
{
    
    return 0;
}