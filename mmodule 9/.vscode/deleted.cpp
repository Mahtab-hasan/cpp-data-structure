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

int size(Node *head)
{
    Node *tmp=head;
    int cnt=0;
    while (tmp != NULL)
    {
        cnt++;
        tmp= tmp->next;
    }
    return cnt;

}
void deleted_position(Node * head,int pos)
{
    Node *tmp=head;
    for (int i = 1; i < pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}
void deleted_tail(Node*&tail)
{   
    Node * deleted =tail;
    tail=tail->prev;
    delete deleted;
    tail->next=NULL;
}
void deleted_head(Node *&head)
{   
    Node * deleteNode =head;
    head=head->next;
    delete deleteNode;
    head->prev=NULL;
}
int main()
{
    
    Node * head =new Node (10);
    Node * a =new Node (20);
    Node * b =new Node (30);
    Node * c =new Node (40);
    Node *tail=c;

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    int pos,val;
    deleted_tail(tail);
    // deleted_head(head);
    

    print(head);
    print_back(tail);
    
    return 0;
}


