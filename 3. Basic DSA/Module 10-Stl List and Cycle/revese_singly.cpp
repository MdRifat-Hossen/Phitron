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
void recursion_print(node *n)
{
    if (n == NULL)
        return;
    cout << n->val << endl;
    recursion_print(n->next);
}
void reverse_print(node *n)
{
    if (n == NULL)
        return;
    reverse_print(n->next);
    cout << n->val << endl;
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void revese(node *&head, node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    revese(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    head->next = a;
    a->next = b;
    revese(head, head);
    print(head);
    // recursion_print(head);
    // reverse_print(head);

    return 0;
}