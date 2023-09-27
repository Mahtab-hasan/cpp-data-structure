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
int main()
{
    Node * head =new Node (10);
    Node * a =new Node (30);
    Node * b =new Node (40);
    Node *tail=b;

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;

    print(head);
    print_back(tail);
    
    return 0;
}