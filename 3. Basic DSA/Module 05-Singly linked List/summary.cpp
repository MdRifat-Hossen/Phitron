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
void print(node *head)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        cout << tmp->val << " ";
        // sum += tmp->val;
        tmp = tmp->next;
    }
    cout << endl
         << count;
}
int main()
{
    node *head = new node(5);
    node *a = new node(7);
    node *b = new node(1);
    node *c = new node(14);
    node *d = new node(3);
    node *e = new node(11);

    //   conecting the node
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;
    // node *sum = 0;
    // node *tmp = head;
    // while (tmp != NULL)
    // {
    //     // cout << tmp->val << " ";
    //     sum += tmp->val;
    //     tmp = tmp->next;
    // }
    // cout << sum - tmp;
    print(head);

    return 0;
}