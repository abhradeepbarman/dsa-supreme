#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode* left, * right;
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        //edge case
        if(root == NULL)    
            return ans;
        
        int level = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> tempAns;

        while(!q.empty()) {
            TreeNode* temp = q.front();

            if(temp == NULL) {
                
                if(level % 2 == 0) {
                    //even leve;
                    ans.push_back(tempAns);
                }
                else {
                    //odd level
                    reverse(tempAns.begin(), tempAns.end());
                    ans.push_back(tempAns);
                }                
                q.pop();

                if(!q.empty()) {
                    q.push(NULL);
                    tempAns.clear();
                }
                level++;
            }
            else {
                tempAns.push_back(temp->val);
                q.pop();

                if(temp->left)  
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return ans;
    }
};


int main()
{
    
    return 0;
}