#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;

    }
};
void print(Node*head)
{
    Node *tmp=head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp =tmp->next;
    }
    cout <<endl;
}
void print_back(Node *tail)
{
    Node *tmp =tail;
    while (tmp != NULL)
    {
        cout <<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void Insert_tail(Node *&head ,Node *&tail, int val)
{
    Node *newNode = new Node (val);
    if (tail ==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int main()
{
    Node *head =NULL;
    Node *tail =NULL;
    
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        Insert_tail(head,tail,val);
    }
    print(head);
    print_back(tail);
    return 0;
}