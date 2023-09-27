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
    Node a(10);
    Node b(20);
    // create_node c(30);

    a.next=&b;

    // a.val=10; 
    // b.val=20;
    
    // b.next=NULL;

    cout<< a.val<<endl;
    cout<< b.val<<endl;
    cout<<(*a.next).val<<endl;
    cout << a.next->val<<endl;


    return 0;
}