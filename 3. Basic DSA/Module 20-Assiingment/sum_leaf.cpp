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
void sum_leaf(Node *root, int &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans += root->data;
        return;
    }
    sum_leaf(root->left, ans);
    sum_leaf(root->right, ans);
    // return;
}
int main()
{
    Node *root = NULL;
    root = builtTree(root);
    int ans = 0;
    sum_leaf(root, ans);
    cout << ans << endl;

    return 0;
}
