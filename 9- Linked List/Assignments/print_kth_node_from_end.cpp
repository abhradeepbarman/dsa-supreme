#include<bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
};

void fun(SinglyLinkedListNode* head, int &positionFromTail, int& ans) {

    if(head == NULL)
        return;
        
    fun(head->next, positionFromTail, ans);

    if(positionFromTail == 0) {
        ans = head->data;
    }
    positionFromTail--;    
}

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int ans = -1;
    fun(llist, positionFromTail, ans);
    return ans;
}

int main()
{
    
    return 0;
}