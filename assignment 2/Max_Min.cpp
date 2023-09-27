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

void print ( Node *head)
{
    if (head == NULL)
    {
        return;
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;

    while (head != NULL)
    {
        maxi =max (maxi,head->val);
        mini =min (mini,head->val);
        head = head->next;
    }
    cout<< maxi <<" ";
    cout<< mini <<" ";
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
    Node * head = linked_list();
    print(head);
    deleted(head);
    return 0;
}