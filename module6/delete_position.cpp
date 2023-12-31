#include <bits/stdc++.h>
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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
        tmp->next = newNode;
        cout << endl<< endl<< "Inserted at position "<< pos << endl<< endl;


    }
    
}
void insert_at_head(Node *&head ,int v)
{
    Node *newNode = new Node (v);
    newNode->next = head;
    head= newNode;
    cout<<endl<<endl<<"Inserted At Head"<<endl<<endl;
}
void Deleted_from_Position(Node *head,int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos -1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode= tmp->next;
      tmp->next= tmp->next->next;
     delete deleteNode;

}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: insert at any Position" << endl;
        cout << "Option 4: insert at Head" << endl;
        cout << "Option 5: Deleted at Position" << endl;
        cout << "Option 6: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos,v;
            cout <<" Enter Position: ";
            cin>> pos;
            cout << "Enter You  Value: ";
            cin>>v;
            if (pos == 0)
            {
                insert_at_head(head,v);
            }
            else
           { 
            insert_at_position(head,pos,v);

            }
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Position: ";
            cin>> pos;
            Deleted_from_Position(head,pos);
        }
        
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}