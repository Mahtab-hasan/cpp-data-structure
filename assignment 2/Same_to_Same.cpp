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

bool cmp_list(Node *head1 , Node *head2)
{
    if (head1 ==NULL && head2==NULL)
    {
        return true;
    }
   else if (head1 == NULL || head2 ==NULL)
   {
        return false;
   }
   else
   {
    return (head1->val ==head2->val) &&cmp_list(head1->next,head2->next);
   }
   
    
}

Node *linked_list()
{
    int v;
    Node *head =NULL;
    Node *tail =NULL;
    while (true)
    {
        cin>>v;
        if (v == - 1)
        {
            break;
        }
        Node* newNode= new Node(v);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}
void deleted(Node*head)
{
    while (head!= NULL)
    {
        Node*tmp = head;
        head=head->next;
        delete tmp;
    }
    
}
int main()
{
    
    Node *head1 = linked_list();
    Node *head2 = linked_list();

    bool same =cmp_list(head1,head2);
    if (same)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    deleted(head1);
    deleted(head2);


    

    return 0;
}