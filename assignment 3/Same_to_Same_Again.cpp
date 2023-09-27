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

class Stack
{

public:
    Node *top;
    Stack()
    {
        top = NULL;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    void push(int v)
    {
        Node *newNode = new Node(v);
        newNode->next = top;
        top = newNode;
    }
    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        int v = top->val;
        Node *tmp = top;
        top = top->next;
        delete tmp;
        return v;
    }
};
class Queue
{
public:
    Node *head;
    Node *tail;
    Queue()
    {
        head = NULL;
        tail = NULL;
    }
    bool isEmpty()
    {
        return head == NULL;
    }
    void enqueue(int v)
    {
        Node *newNode = new Node(v);
        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        int v = head->val;
        Node *tmp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return v;
    }
};

bool my_list(int n, int m, int a[], int b[])
{
    if (n != m)
    {
        return false;
    }

    Stack s;
    Queue q;
    for (int i = 0; i < n; i++)
    {
        s.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        q.enqueue(b[i]);
    }
    while (!s.isEmpty() && !q.isEmpty())
    {
        int st = s.pop();
        int qt = q.dequeue();
        if (st != qt)
        {
            return false;
        }
    }
    if (!s.isEmpty() || !q.isEmpty())
    {
        return false;
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    if (my_list(n, m, a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}