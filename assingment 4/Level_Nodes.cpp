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
void level_Node(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }
    queue<Node *> q;
    q.push(root);
    int currlevel = 0;
    int currNode = 1;
    int nextNode = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (currlevel == level)
        {
            cout << node->val << " ";
        }
        else if (currlevel > level)
        {
            break;
        }
        if (node->left != NULL)
        {
            q.push(node->left);
            nextNode++;
        }
        if (node->right != NULL)
        {
            q.push(node->right);
            nextNode++;
        }
        currNode--;
        if (currNode == 0)
        {
            currNode = nextNode;
            nextNode = 0;
            currlevel++;
        }
    }
    if (currlevel <= level)
    {
        cout << "Invalid";
    }
}
int main()
{
    Node *root = levelOrder();
    int level;
    cin >> level;
    level_Node(root, level);

    return 0;
}