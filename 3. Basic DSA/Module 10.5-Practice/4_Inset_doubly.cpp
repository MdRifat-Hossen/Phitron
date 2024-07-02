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

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int sizelist(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    if (pos == sizelist(head))
    {
        insert_at_tail(head, tail, val);
        return;
    }
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos < 0 || pos > sizelist(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_position(head, tail, pos, val);
            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}
