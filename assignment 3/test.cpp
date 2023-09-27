// #include <iostream>

// using namespace std;

// // Node class for linked list
// class Node {
// public:
//     int val;
//     Node* next;

//     Node(int val) {
//         val = val;
//         next = NULL;
//     }
// };

// // Custom implementation of a stack using linked list
// class Stack {
// private:
//     Node* top;

// public:
//     Stack() {
//         top = NULL;
//     }

//     bool isEmpty() {
//         return top == NULL;
//     }

//     void push(int x)
//     {
//         Node* newNode = new Node(x);
//         newNode->next = top;
//         top = newNode;
//     }

//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack is isEmpty. Cannot pop element." << endl;
//             return -1;
//         }
//         int v = top->val;
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//         return v;
//     }
// };

// // Custom implementation of a queue using linked list
// class Queue {
// private:
//     Node* head;
//     Node* tail;

// public:
//     Queue() {
//         head = NULL;
//         tail = NULL;
//     }

//     bool isEmpty() {
//         return head == NULL;
//     }

//     void enqueue(int v) {
//         Node* newNode = new Node(v);
//         if (isEmpty()) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is isEmpty. Cannot dequeue element." << endl;
//             return -1;
//         }
//         int v = head->val;
//         Node* temp = head;
//         head = head->next;
//         if (head == NULL) {
//             tail = NULL;
//         }
//         delete temp;
//         return v;
//     }
// };

// // Function to check if two lists are the same after removing elements from stack and queue
// bool checkLists(int N, int M, int A[], int B[]) {
//     Stack stack;
//     Queue queue;

//     // Push elements of A into the stack
//     for (int i = 0; i < N; i++) {
//         stack.push(A[i]);
//     }

//     // Enqueue elements of B into the queue
//     for (int i = 0; i < M; i++) {
//         queue.enqueue(B[i]);
//     }

//     // Pop elements from the stack and dequeue elements from the queue
//     // and compare them with the elements in A and B respectively
//     while (!stack.isEmpty() && !queue.isEmpty()) {
//         int stackElement = stack.pop();
//         int queueElement = queue.dequeue();
//         if (stackElement != queueElement) {
//             return false;
//         }
//     }

//     // If there are remaining elements in either the stack or the queue,
//     // the lists are not the same
//     if (!stack.isEmpty() || !queue.isEmpty()) {
//         return false;
//     }

//     return true;
// }

// int main() {
//     int N, M;
//     cin >> N >> M;

//     int A[N];
//     int B[M];

//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     for (int i = 0; i < M; i++) {
//         cin >> B[i];
//     }

//     if (checkLists(N, M, A, B)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

// Node class for linked list
class Node
{
public:
    int val;
    Node *next;

    Node(int value)
    {
        val = value;
        next = nullptr;
    }
};

// Custom implementation of a stack using linked list
class Stack
{
public:
    Node *top;

    Stack()
    {
        top = nullptr;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is isEmpty. Cannot pop element." << endl;
            return -1;
        }
        int v = top->val;
        Node *temp = top;
        top = top->next;
        delete temp;
        return v;
    }
};

// Custom implementation of a queue using linked list
class Queue
{
public:
    Node *head;
    Node *tail;

    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty()
    {
        return head == nullptr;
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
            cout << "Queue is isEmpty. Cannot dequeue element." << endl;
            return -1;
        }
        int v = head->val;
        Node *temp = head;
        head = head->next;
        if (head == nullptr)
        {
            tail = nullptr;
        }
        delete temp;
        return v;
    }
};

// Function to check if two lists are the same after removing elements from stack and queue
bool checkLists(int n, int m, int a[], int b[])
{
    Stack s;
    Queue q;

    // Push elements of A into the stack
    for (int i = 0; i < n; i++)
    {
        s.push(a[i]);
    }

    // Enqueue elements of B into the queue
    for (int i = 0; i < m; i++)
    {
        q.enqueue(b[i]);
    }

    // Pop elements from the stack and dequeue elements from the queue
    // and compare them with the elements in A and B respectively
    while (!s.isEmpty() && !q.isEmpty())
    {
        int st = s.pop();
        int qt = q.dequeue();
        if (st != qt)
        {
            return false;
        }
    }

    // If there are remaining elements in either the stack or the queue,
    // the lists are not the same
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

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    if (checkLists(n, m, a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
