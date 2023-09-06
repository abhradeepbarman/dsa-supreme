#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<TreeNode*> ans;
    unordered_map<string, int>subTreeMap;

    string preorder(TreeNode* root) {
        //base case
        if(root == NULL) {
            return "N";
        }

        string curr = to_string(root->val);
        string left = preorder(root->left);
        string right = preorder(root->right);

        string str = curr + "," + left + "," + right;
        
        //make entry in map
        subTreeMap[str]++;
        
        if(subTreeMap[str] == 2) {
            //when we get 2nd time occurrence 
            //we will push in answer
            ans.push_back(root);
        }

        return str;
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        preorder(root);
        return ans;
    }
};

int main()
{
    
    return 0;
}