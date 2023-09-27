#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class DoubleList
{
    public:
    Node*head;
    Node*tail;
    DoubleList()
    {
        head = NULL;
        tail = NULL;
    }
void Insert(int v,int x)
{
    Node*newNode =new Node(x);
    if (v < 0 ||v > size())
    {
        cout <<"Invalid"<<endl;
        return;
    }
    if(head == NULL)
    {
        head =newNode;
        tail =newNode;
    }
    else if(v==0)
    {
        newNode->next =head;
        head->prev=newNode;
        head= newNode;
    }
    else if(v==size())
    {
        newNode->prev =tail;
        tail->next =newNode;
        tail=newNode;
    }
    else
    {
        Node* cur = head;
        int count = 0;
        while (cur != NULL && count < v)
        {
            cur = cur->next;
            count++;
        }
        newNode->prev=cur->prev;
        newNode->next=cur;
        cur->prev->next = newNode;
        cur->prev=newNode;
        
    }
    right();
    left();

}
int size()
    {
        int count = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {
            count++;
            tmp= tmp->next; 
        }
        return count;
    }
    void right()
    {
        cout<<"L -> ";
        Node *tmp =head;
        while (tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp= tmp->next;
        }
        cout <<endl;
        
    }
    void left()
    {
        cout<<"R -> ";
        Node *tmp= tail;
        while (tmp!= NULL)
        {
            cout<<tmp->val<<" ";
            tmp= tmp->prev;
        }
        cout<<endl;
    }
};
int main()
{
    int Q;
    cin>>Q;
    DoubleList myList;
    for (int i = 0; i < Q; i++)
    {
        int x,v;
        cin>>x>>v;
        myList.Insert(x,v);
    }
    
    return 0;
}       