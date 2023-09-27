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
bool perfect_tree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int count = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node->left && node->right)
        {
            q.push(node->left);
            q.push(node->right);
        }
        else
        {
            if (node->left || node->right)
            {
                return false;
            }
        }
    }
    return true;
}
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

int main()
{
    Node *root = levelOrder();
    bool perfect = perfect_tree(root);
    if (perfect)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}