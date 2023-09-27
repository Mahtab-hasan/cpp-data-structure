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
        while (node->next)
        {
            node = node->next;
        }
        node->next=newNode;
    }

}
void mid(Node *head)
{
    if (head == NULL)
    {
        return;
    }  
    vector<int> v;
    Node *node = head;
    while (node != NULL)
    {
        v.push_back(node->val);
        node= node->next;
    }
     
    sort(v.rbegin(),v.rend());
    int x = v.size() / 2;
    if (v.size() %2 == 0)
    {
        cout << v[x-1]<<" ";
    }
    cout << v[x]<<endl;

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
    Node *head =NULL;
    int v;
    while (true)
    {
        cin>>v;
        if (v == - 1)
        {
            break;
        }
        Insert(head ,v);
    }
    mid(head);
    deleted (head);
    return 0;
}