// https://www.naukri.com/code360/problems/node-level_920383?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;

// TreeNode class definition
template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// Function to find the level of a node with a given value in a binary tree
int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    if (root == NULL)
        return 0; // If the tree is empty, return 0

    // Queue for BFS, storing pairs of nodes and their corresponding levels
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 1});

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> pre = q.front(); // Get the front element
        TreeNode<int> *node = pre.first;
        int level = pre.second;
        q.pop(); // Remove the front element from the queue

        // If the current node's value matches the searched value, return the level
        if (node->val == searchedValue)
        {
            return level;
        }

        // Add left and right children to the queue with the incremented level
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }

    // If the node is not found, return 0
    return 0;
}

// Function to build a binary tree from input
TreeNode<int> *buildTree(vector<int> &nodes)
{
    if (nodes.empty() || nodes[0] == -1)
        return nullptr;

    TreeNode<int> *root = new TreeNode<int>(nodes[0]);
    queue<TreeNode<int> *> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < nodes.size())
    {
        TreeNode<int> *current = q.front();
        q.pop();

        if (nodes[i] != -1)
        {
            current->left = new TreeNode<int>(nodes[i]);
            q.push(current->left);
        }
        i++;
        if (i < nodes.size() && nodes[i] != -1)
        {
            current->right = new TreeNode<int>(nodes[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        vector<int> nodes;
        int val;

        // Input for tree nodes (-1 represents null)
        while (cin >> val)
        {
            nodes.push_back(val);
            if (cin.peek() == '\n')
                break;
        }

        int searchedValue;
        cin >> searchedValue;

        TreeNode<int> *root = buildTree(nodes);
        int result = nodeLevel(root, searchedValue);

        cout << result << endl;
    }

    return 0;
}
