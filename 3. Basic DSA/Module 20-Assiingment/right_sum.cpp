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
void print_right(Node *root)
{
    cout << root->data << " ";
    if (root->right)
    {
        cout << root->right->data << " ";
        print_right(root->right);
    }
    else if (root->left)
    {
        cout << root->left->data << " ";
        print_right(root->left);
    }
}

int main()
{
    Node *root = NULL;
    root = builtTree(root);
    print_right(root);

    return 0;
}
