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

void removeNode(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *cur =head;
    while(cur != NULL)
    {
        Node*tmp=cur;
        while(tmp->next != NULL)
        {
            if(tmp->next->val == cur->val)
            {
                Node*tmp2=tmp->next;
                tmp->next=tmp2->next;
                delete tmp2;
            }
            else
            {
                tmp =tmp->next;
            }
            
        }
        cur= cur->next;

    }

}

void print(Node *head)
{
    while(head != NULL)
    {
        cout<<head->val<<" ";
        head= head->next;
    }
}
int main()
{
    Node *head =NULL;
    int v;
    while(cin>>v && v != -1)
    {
        Node* newNode =new Node (v);
        if(head==NULL)
        {
            head= newNode;
        }
        else
        {
            Node* tmp=head;
            while (tmp->next!=NULL)
            {
                tmp=tmp->next;

            }
            tmp->next =newNode;
            
        }
    }

    removeNode(head);
    bool swapNode =true;
    Node*tmp=head;
    Node*tmp2=NULL;
    while (swapNode)
    {
        swapNode = false;
        tmp=head;
        while (tmp->next != tmp2)
        {
            if(tmp->val > tmp->next->val)
            {
                swap(tmp->val, tmp->next->val);
                swapNode =true;
            }
            tmp =tmp->next;
        }
        tmp2=tmp;
        
    }
    print(head);

    Node *newNode;
    while (head != NULL)
    {
        newNode=head;
        head= head->next;
        delete newNode;
    }
    
    return 0;
}