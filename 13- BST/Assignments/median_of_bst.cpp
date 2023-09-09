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

int findNodeCount(struct Node* root)
{
    int count = 0;
    struct Node *current, *pre;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            count++;
            current = current->right;
        }
        else {
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
                pre = pre->right;

            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
            else {
                pre->right = NULL;
                count++;
                current = current->right;
            } 
        } 
    } 
    return count;
}

float MorrisTraversal(struct Node* root, int& n)
{
    int oddPos = (n+1)/2;
    int evenPos1 = n/2;
    int evenPos2 = (n/2) + 1;
    
    float oddVal=-1, evenVal1=-1, evenVal2=-1;
    int i = 0;
    
    struct Node *current, *pre;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            i++;
            if(i == oddPos)     oddVal = current->data;
            if(i == evenPos1)   evenVal1 = current->data;
            if(i == evenPos2)   evenVal2 = current->data;
            current = current->right;
        }
        else {
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
                pre = pre->right;

            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
            else {
                pre->right = NULL;
                i++;
                if(i == oddPos)     oddVal = current->data;
                if(i == evenPos1)   evenVal1 = current->data;
                if(i == evenPos2)   evenVal2 = current->data;
                current = current->right;
            } 
        } 
    } 
    
    float median = 0;
    
    if(n&1) {
        //odd length
        median = oddVal;
    }
    else {
        //even length
        median = (evenVal1 + evenVal2) / 2.0;
    }
    
    return median;
}

float findMedian(struct Node *root)
{
      int n = findNodeCount(root);
      return MorrisTraversal(root, n);
}

int main()
{
    
    return 0;
}