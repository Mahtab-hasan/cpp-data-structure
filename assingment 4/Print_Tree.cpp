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
Node *levelOrder()
{
    int v;
    cin >> v;
    if (v == -1)
        return NULL;
    Node *root = new Node(v);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        int left, right;
        cin >> left >> right;
        if (left != -1)
        {
            node->left = new Node(left);
            q.push(node->left);
        }
        if (right != -1)
        {
            node->right = new Node(right);
            q.push(node->right);
        }
    }
    return root;
}
void printReverse(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    vector<int> v;

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        v.push_back(node->val);
        if (node->right != NULL)
            q.push(node->right);
        if (node->left != NULL)
            q.push(node->left);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    Node *root = levelOrder();
    printReverse(root);

    return 0;
}