#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *builtTree(Node *root)
{
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    root->left = builtTree(root->left);
    root->right = builtTree(root->right);
    return root;
}
int leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = leaf(root->left);
        int r = leaf(root->right);
        return l + r;
    }
}

int main()
{
    // 10 20 40 -1 60 -1 -1 90 -1 100 -1 -1 30 -1 50 70 -1 -1 80 -1 -1
    Node *root = NULL;
    root = builtTree(root);
    cout << leaf(root) << endl;
    return 0;
}
