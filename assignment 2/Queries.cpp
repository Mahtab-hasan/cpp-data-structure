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
void Insert_at_head(Node *&head,int v)
{
    Node *newNode=new Node(v);
    newNode->next=head;
    head = newNode;

}

void Insert_at_tail(Node *&head,  int v)
{   
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *node = head;
        while (node->next)
        {
            node =node->next;
        }
        node->next=newNode;
    }

}
void print(Node *head)
{
    Node *tail =head;
    Node *node =head;
    while (node != NULL)
    {
        tail = node;
        node=node->next;
    }
    cout <<head->val<< " "<< tail->val<<endl;

}
int main()
{
    

    Node *head = NULL;
    int Q;
    cin>>Q;
    for (int i = 0; i < Q; i++)
    {
        int x,v;
        cin >>x>>v;
        if (x==0)
        {
            Insert_at_head(head,v);
        }
        else if(x==1)
        {
            Insert_at_tail(head,v);
        }
        
        print(head);
    }
    



    return 0;
}