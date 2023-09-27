#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
            int val;
            Node* next;

        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};

int main()
{
    
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* d = new Node(50);
    // Node* e = new Node(60);
    
    // head->next=a;
    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;

    // // cout<<head->val<<endl; this is not the good way to print this .
    // // cout<<head->next->val<<endl;
    // // cout<<head->next->next->val<<endl;
    // // cout<<head->next->next->next->val<<endl;
    // // cout<<head->next->next->next->next->val<<endl;

    // // while (head != NULL)
    // // {
    // //     cout<<head->val<<endl;
    // //     head=head->next;
    //         // eivabe korle head er val haraia jabe null hoia jabe
    // // }
    // Node* tmp = head;

    // while (tmp != NULL)
    // {
    //     cout<<tmp->val<<endl;
    //     tmp=tmp->next;
    // }
    // cout<<endl;

    // tmp=head;
    // while (tmp != NULL)
    // {
    //     cout<<tmp->val<<endl;
    //     tmp=tmp->next;
    // }
    

Node* node = new Node(5);
cout << node->val << endl;
    
   
    return 0;
}