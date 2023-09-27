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
void miniMax(Node *root, int &leafmax, int &leafmini)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node->left == NULL && node->right == NULL)
        {
            leafmax = max(leafmax, node->val);
            leafmini = min(leafmini, node->val);
        }
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}
int main()
{
    Node *root = levelOrder();

    int leafmax = INT_MIN;
    int mini = INT_MAX;

    miniMax(root, leafmax, mini);
    cout << leafmax << " " << mini << endl;

    return 0;
}