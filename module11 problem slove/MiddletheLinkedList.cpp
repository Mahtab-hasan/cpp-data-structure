#include<bits/stdc++.h>
using namespace std;
int main()
{
    class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow =head;
        ListNode* fast =head;
        while(fast!= NULL && fast->next!= NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->val<<endl;
        return slow;
    }
};
    class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow =head;
        ListNode* fast =head;
        while(fast!= NULL && fast->next!= NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->val<<endl;
        return slow;
    }
};

//leetcode