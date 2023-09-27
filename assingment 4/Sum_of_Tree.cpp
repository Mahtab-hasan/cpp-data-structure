#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int sumNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        sum += node->val;
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
    return sum;
}
int main()
{
    int v;
    cin >> v;

    Node *root = new Node(v);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        int left, right;
        cin >> left;
        if (left != -1)
        {
            node->left = new Node(left);
            q.push(node->left);
            ;
        }
        cin >> right;
        if (right != -1)
        {
            node->right = new Node(right);
            ;
            q.push(node->right);
        }
    }
    int sum = sumNode(root);
    cout << sum << endl;

    return 0;
}