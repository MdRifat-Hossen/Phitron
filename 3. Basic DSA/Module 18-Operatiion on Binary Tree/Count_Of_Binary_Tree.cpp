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
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;
}
int main()
{
    // 10 20 40 -1 60 -1 -1 90 -1 100 -1 -1 30 -1 50 70 -1 -1 80 -1 -1
    Node *root = NULL;
    root = builtTree(root);
    cout << count(root) << endl;
    return 0;
}
