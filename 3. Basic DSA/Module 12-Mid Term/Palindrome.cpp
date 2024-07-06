#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

vector<int> print_normal(Node *head)
{
    vector<int> p;
    Node *tmp = head;
    while (tmp != NULL)
    {
        p.push_back(tmp->val);
        tmp = tmp->next;
    }
    return p;
}

vector<int> print_reverse(Node *tail)
{
    vector<int> p1;
    Node *tmp = tail;
    while (tmp != NULL)
    {
        p1.push_back(tmp->val);
        tmp = tmp->prev;
    }
    return p1;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    vector<int> v = print_normal(head);
    vector<int> v1 = print_reverse(tail);
    if (v == v1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
