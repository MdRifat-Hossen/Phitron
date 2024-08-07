#include <bits/stdc++.h>
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
void dlete_val(Node *&head, int val)
{
    if (head->val == val)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->next->val == val)
        {
            Node *deletenode = tmp->next;
            tmp->next = tmp->next->next;
            delete deletenode;
            break;
        }
        tmp = tmp->next;
    }
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
        insert_tail(head, tail, val);
    }
    int v;
    cin >> v;
    dlete_val(head, v);
    print_linked_list(head);
    return 0;
}