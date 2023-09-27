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

void Insert (Node *&head,  int v)
{   
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *node = head;
        while (node->next != NULL)
        {
            node =node->next;
        }
        node->next=newNode;
    }

}
void reverse(Node *head)
{
    if (head== NULL)
    {
        return ;
    }
    reverse(head->next);
    cout<<head->val<<" ";

}
void linked_list(Node*head)
{
    Node *node = head;
    while (node != NULL)
    {
        cout<<node->val<<" ";
        node=node->next;
    }
    cout<<endl;
    
}

int main()
{
    Node *head = NULL;
    int v;
    while (true)
    {
        cin >>v;
        if(v== -1)
        {
            break;
        }
        Insert(head,v);
    }

    reverse(head);
    cout <<endl;
    linked_list(head);
    
    return 0;
}