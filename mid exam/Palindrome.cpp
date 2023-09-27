#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
bool palindrome(Node *head)
{
    if (head== NULL || head->next== NULL)
    {
        return true;
    }
    Node* slow =head;
    Node* fast =head;
    Node* prev =NULL;
    
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;

        Node* tmp= slow->next;
        slow->next = prev;
        prev = slow;
        slow = tmp;

    }
    if(fast != NULL)
    {
        slow = slow->next;
    }
    while(slow!= NULL)
    {
        if(prev->val != slow->val)
        {
            return false;
        }
        prev =prev->next;
        slow=slow->next;
    }
    return true;


    
}
int main()
{
    int v;
    Node *head =NULL;
    Node *tail =NULL;
    while (cin>>v && v != -1)
    {
        Node *newNode= new Node (v);
    
    if (head== NULL)
    {
        head= newNode;
        tail= newNode;
    }
    else
    {
        tail->next =newNode;
        tail= newNode;
    }
    } 
    if(palindrome(head))
    {
        cout<<"YES";
    }   
    else
    {
        cout<<"NO";
    }
    Node* cur =head;
    while (cur!= NULL )
    {
        Node* tmp=cur;
        cur=cur->next;
        delete tmp;
    }
    
    return 0;
}