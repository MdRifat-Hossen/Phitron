#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// print the list
void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// insert at possirton
int countList(node *head)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void inster_at_positon(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        // cout << tmp->val;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
// head update
void inset_at_head(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
// tail insert
void insert_tail(node *head, node *tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
// print recursivly
void print_reversly(node *n)
{
    // base case
    if (n == NULL)
    {
        return;
    }
    print_reversly(n->next);
    cout << n->val;
}
int main()
{
    node *head = new node(20);
    node *a = new node(52);
    node *b = new node(85);
    // node *tail = b;
    head->next = a;

    a->next = b;
    b->next = NULL;
    print_reversly(head);
    // print_list(head);
    // int pos, val;
    // cin >> pos >> val;
    // if (pos > countList(head))
    // {
    //     cout << "Invalite index" << endl;
    // }
    // else if (pos == 0)
    // {
    //     inset_at_head(head, val);
    // }
    // else if (pos == countList(head))
    // {
    //     insert_tail(head, tail, val);
    // }
    // // inster_at_positon(head, 2, 100);
    // print_list(head);

    return 0;
}