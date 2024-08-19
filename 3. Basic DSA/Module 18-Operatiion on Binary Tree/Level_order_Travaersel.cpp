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
void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // 1.  bere kore niya aso
        Node *f = q.front();
        q.pop();
        if (f == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << f->data << " ";
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
}

int main()
{
    // 10 20 40 -1 60 -1 -1 90 -1 100 -1 -1 30 -1 50 70 -1 -1 80 -1 -1
    Node *root = NULL;
    root = builtTree(root);
    cout << "Level Order Traversal : " << endl;
    LevelOrderTraversal(root);

    return 0;
}
