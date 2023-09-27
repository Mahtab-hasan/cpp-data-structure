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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++; // opore rakha save zone ;;;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    // while (q.empty()== false) // here is too way you can use this , this is long way and ,
    while (!q.empty()) // this is the short way |
    {
        cout << q.front() << endl;
        q.pop();
    }

    // SO THIS IS THE WAY THAT YOU CAN PUSH ANY  THING WITHOUT INPUT//
    //  q.push(10);
    //  q.push(20);
    //  q.push(30);
    //  q.push(40);

    // // q.pop();
    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;

    return 0;
}