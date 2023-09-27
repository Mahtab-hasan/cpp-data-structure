// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // class Node
// // // // // // {
// // // // // // public:
// // // // // //     int val;
// // // // // //     Node *left;
// // // // // //     Node *right;
// // // // // //     Node(int val)
// // // // // //     {
// // // // // //         this->val = val;
// // // // // //         this->left = NULL;
// // // // // //         this->right = NULL;
// // // // // //     }
// // // // // // };

// // // // // // int sumNode(Node *root)
// // // // // // {
// // // // // //     if (root == NULL)
// // // // // //     {
// // // // // //         return 0;
// // // // // //     }

// // // // // //     int sum = 0;
// // // // // //     queue<Node *> q;
// // // // // //     q.push(root);

// // // // // //     while (!q.empty())
// // // // // //     {
// // // // // //         Node *node = q.front();
// // // // // //         q.pop();

// // // // // //         sum += node->val;

// // // // // //         if (node->left != NULL)
// // // // // //             q.push(node->left);

// // // // // //         if (node->right != NULL)
// // // // // //             q.push(node->right);
// // // // // //     }

// // // // // //     return sum;
// // // // // // }

// // // // // // int main()
// // // // // // {
// // // // // //     // Read the binary tree in level order from the user
// // // // // //     int v;

// // // // // //     cin >> v;
// // // // // //     Node *root = new Node(v);

// // // // // //     queue<Node *> q;
// // // // // //     q.push(root);

// // // // // //     while (!q.empty())
// // // // // //     {
// // // // // //         Node *node = q.front();
// // // // // //         q.pop();

// // // // // //         int left, right;
// // // // // //         cin >> left;
// // // // // //         if (left != -1)
// // // // // //         {
// // // // // //             node->left = new Node(left);
// // // // // //             q.push(node->left);
// // // // // //         }

// // // // // //         cin >> right;
// // // // // //         if (right != -1)
// // // // // //         {
// // // // // //             node->right = new Node(right);
// // // // // //             q.push(node->right);
// // // // // //         }
// // // // // //     }

// // // // // //     // Calculate the sum of all node values
// // // // // //     int sum = sumNode(root);

// // // // // //     // Output the result
// // // // // //     cout << sum << endl;

// // // // // //     return 0;
// // // // // // }

// // // // // // 2.nd number code
// // // // // #include <iostream>
// // // // // #include <queue>
// // // // // #include <climits>

// // // // // using namespace std;

// // // // // class Node
// // // // // {
// // // // // public:
// // // // //     int val;
// // // // //     Node *left;
// // // // //     Node *right;
// // // // //     Node(int val)
// // // // //     {
// // // // //         this->val = val;
// // // // //         this->left = NULL;
// // // // //         this->right = NULL;
// // // // //     }
// // // // // };

// // // // // // Function to build the binary tree from level order traversal
// // // // // Node *levelOrder()
// // // // // {
// // // // //     int val;
// // // // //     cin >> val;
// // // // //     if (val == -1)
// // // // //     {
// // // // //         return nullptr;
// // // // //     }
// // // // //     Node *root = new Node(val);

// // // // //     queue<Node *> q;
// // // // //     q.push(root);

// // // // //     while (!q.empty())
// // // // //     {
// // // // //         Node *node = q.front();
// // // // //         q.pop();

// // // // //         int left, right;
// // // // //         cin >> left >> right;

// // // // //         if (left != -1)
// // // // //         {
// // // // //             node->left = new Node(left);
// // // // //             q.push(node->left);
// // // // //         }
// // // // //         if (right != -1)
// // // // //         {
// // // // //             node->right = new Node(right);
// // // // //             q.push(node->right);
// // // // //         }
// // // // //     }

// // // // //     return root;
// // // // // }

// // // // // void miniMax(Node *root, int &leafMax, int &leafMin)
// // // // // {
// // // // //     if (root == nullptr)
// // // // //     {
// // // // //         return;
// // // // //     }

// // // // //     queue<Node *> q;
// // // // //     q.push(root);

// // // // //     while (!q.empty())
// // // // //     {
// // // // //         Node *node = q.front();
// // // // //         q.pop();

// // // // //         if (node->left == nullptr && node->right == nullptr)
// // // // //         {

// // // // //             leafMax = max(leafMax, node->val);
// // // // //             leafMin = min(leafMin, node->val);
// // // // //         }

// // // // //         if (node->left != nullptr)
// // // // //         {
// // // // //             q.push(node->left);
// // // // //         }
// // // // //         if (node->right != nullptr)
// // // // //         {
// // // // //             q.push(node->right);
// // // // //         }
// // // // //     }
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     Node *root = levelOrder();

// // // // //     int leafMax = INT_MIN;
// // // // //     int leafMin = INT_MAX;

// // // // //     miniMax(root, leafMax, leafMin);

// // // // //     cout << leafMax << " " << leafMin << endl;

// // // // //     return 0;
// // // // // }

// // // // // 3.rd number qus
// // // // #include <iostream>
// // // // #include <queue>
// // // // #include <stack>

// // // // using namespace std;

// // // // class Node
// // // // {
// // // // public:
// // // //     int val;
// // // //     Node *left;
// // // //     Node *right;

// // // //     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// // // // };

// // // // // Function to build the binary tree from level order traversal
// // // // Node *levelOrder()
// // // // {
// // // //     int v;
// // // //     cin >> v;
// // // //     if (v == -1)
// // // //         return NULL;
// // // //     Node *root = new Node(v);
// // // //     queue<Node *> q;
// // // //     q.push(root);
// // // //     while (!q.empty())
// // // //     {
// // // //         Node *node = q.front();
// // // //         q.pop();
// // // //         int left, right;
// // // //         cin >> left >> right;
// // // //         if (left != -1)
// // // //         {
// // // //             node->left = new Node(left);
// // // //             q.push(node->left);
// // // //         }
// // // //         if (right != -1)
// // // //         {
// // // //             node->right = new Node(right);
// // // //             q.push(node->right);
// // // //         }
// // // //     }
// // // //     return root;
// // // // }

// // // // // Function to print the binary tree in reverse order
// // // // void printReverseTree(Node *root)
// // // // {
// // // //     if (root == nullptr)
// // // //     {
// // // //         return;
// // // //     }

// // // //     stack<Node *> s;
// // // //     queue<Node *> q;
// // // //     q.push(root);

// // // //     while (!q.empty())
// // // //     {
// // // //         Node *node = q.front();
// // // //         q.pop();
// // // //         s.push(node);

// // // //         if (node->right != nullptr)
// // // //         {
// // // //             q.push(node->right);
// // // //         }
// // // //         if (node->left != nullptr)
// // // //         {
// // // //             q.push(node->left);
// // // //         }
// // // //     }

// // // //     while (!s.empty())
// // // //     {
// // // //         cout << s.top() << " ";
// // // //         s.pop();
// // // //     }
// // // // }

// // // // int main()
// // // // {
// // // //     Node *root = levelOrder();

// // // //     printReverseTree(root);

// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // #include <queue>

// // // using namespace std;

// // // class Node
// // // {
// // // public:
// // //     int val;
// // //     Node *left;
// // //     Node *right;

// // //     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// // // };

// // // Node *levelOrder()
// // // {
// // //     int v;
// // //     cin >> v;
// // //     if (v == -1)
// // //         return nullptr;
// // //     Node *root = new Node(v);
// // //     queue<Node *> q;
// // //     q.push(root);
// // //     while (!q.empty())
// // //     {
// // //         Node *node = q.front();
// // //         q.pop();
// // //         int left, right;
// // //         cin >> left >> right;
// // //         if (left != -1)
// // //         {
// // //             node->left = new Node(left);
// // //             q.push(node->left);
// // //         }
// // //         if (right != -1)
// // //         {
// // //             node->right = new Node(right);
// // //             q.push(node->right);
// // //         }
// // //     }
// // //     return root;
// // // }

// // // // Function to print the binary tree in reverse order
// // // void printReverseTree(Node *root)
// // // {
// // //     if (root == nullptr)
// // //     {
// // //         return;
// // //     }

// // //     queue<Node *> q;
// // //     q.push(root);

// // //     vector<int> values;
// // //     while (!q.empty())
// // //     {
// // //         Node *node = q.front();
// // //         q.pop();

// // //         values.push_back(node->val);

// // //         if (node->right != nullptr)
// // //         {
// // //             q.push(node->right);
// // //         }
// // //         if (node->left != nullptr)
// // //         {
// // //             q.push(node->left);
// // //         }
// // //     }

// // //     // for (int i = values.size() - 1; i >= 0; i--)
// // //     // {
// // //     //     cout << values[i] << " ";
// // //     // }
// // //     int i = values.size() - 1;
// // //     while (i >= 0)
// // //     {
// // //         cout << values[i] << " ";
// // //         i--;
// // //     }
// // // }

// // // int main()
// // // {
// // //     Node *root = levelOrder();

// // //     printReverseTree(root);

// // //     return 0;
// // // }

// // // 4th number qus ansr
// // // Function to get the nodes at level X from left to right
// // void getLevelNodes(TreeNode* root, int level) {
// //     if (root == nullptr) {
// //         cout << "Invalid";
// //         return;
// //     }

// //     queue<TreeNode*> q;
// //     q.push(root);

// //     int currlevel = 0;
// //     int currNode = 1;
// //     int nextNode = 0;

// //     while (!q.empty()) {
// //         TreeNode* node = q.front();
// //         q.pop();

// //         if (currlevel == level) {
// //             cout << node->val << " ";
// //         }
// //         else if (currlevel > level) {
// //             break;
// //         }

// //         if (node->left != nullptr) {
// //             q.push(node->left);
// //             nextNode++;
// //         }
// //         if (node->right != nullptr) {
// //             q.push(node->right);
// //             nextNode++;
// //         }

// //         currNode--;

// //         if (currNode == 0) {
// //             currNode = nextNode;
// //             nextNode = 0;
// //             currlevel++;
// //         }
// //     }

// //     if (currlevel <= level) {
// //         cout << "Invalid";
// //     }
// // }

// // int main() {
// //     TreeNode* root = buildBinaryTree();

// //     int level;
// //     cin >> level;

// //     getLevelNodes(root, level);

// //     return 0;
// // }
// // //and this is in main function
// // //   int level; cin >> level;
// // //   LevelNodes(root, level);

// // 5.numnber ans ?
// // Function to check if the binary tree is perfect
// // bool isPerfectBinaryTree(TreeNode* root) {
// //     if (root == nullptr)
// //     {
// //         return true;
// //     }

// //     int nodeCount = 0;
// //     queue<TreeNode*> q;
// //     q.push(root);
// //     while (!q.empty())
// //     {
// //         TreeNode* node = q.front();
// //         q.pop();
// //         nodeCount++;

// //         if (node->left != nullptr) {
// //             q.push(node->left);
// //         }
// //         else
// //         {
// //             if (node->right != nullptr)
// //             {
// //                 return false;
// //             }
// //         }

// //         if (node->right != nullptr) {
// //             q.push(node->right);
// //         }
// //         else
// //         {
// //             if (node->left != nullptr) {
// //                 return false;
// //             }
// //         }
// //     }

// //   return nodeCount == (1 << (nodeCount + 1)) - 1;
// // }

// bool isPerfectBinaryTree(TreeNode* root) {
//     if (root == nullptr) {
//         return true;
//     }

//     int count = 0;
//     bool isCompleteLevel = true;

//     queue<TreeNode*> q;
//     q.push(root);

//     while (!q.empty()) {
//         int levelSize = q.size();

//         if (levelSize != (1 << count)) {
//             return false;
//         }

//         while (levelSize--) {
//             TreeNode* node = q.front();
//             q.pop();

//             if (node->left) {
//                 q.push(node->left);
//                 if (!node->right) {
//                     return false;
//                 }
//             }
//             if (node->right) {
//                 q.push(node->right);
//                 if (!node->left) {
//                     return false;
//                 }
//             }
//         }

//         count++;
//     }

//     return true;
// }

// int main() {
//     TreeNode* root = buildBinaryTree();

//     bool isPerfect = isPerfectBinaryTree(root);

//     if (isPerfect) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
bool isPerfectBinaryTree(TreeNode *root)
{
    if (root == nullptr)
    {
        return true;
    }

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();

        // Check if the node has both left and right children
        if (node->left && node->right)
        {
            q.push(node->left);
            q.push(node->right);
        }
        else
        {
            // Check if the node is a leaf node

            if (node->left || node->right)
            {
                // If a leaf node has only one child, the tree is not perfect
                return false;
            }
        }
    }

    return true;
}
