#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_list(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        { // if the list becomes empty, update tail
            tail = NULL;
        }
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; tmp != NULL && i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL)
    { // if we deleted the last node, update tail
        tail = tmp;
    }
    delete deleteNode;
}

void inter_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    { // if the list was empty, update tail
        tail = newNode;
    }
}

int main()
{
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            inter_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_list(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}
