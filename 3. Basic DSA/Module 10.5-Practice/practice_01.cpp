#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
bool samevalue(node *head, node *head1)
{

    node *tmp = head;
    node *tmp1 = head1;
    int flag = true;
    while (tmp != NULL && tmp1 != NULL)
    {
        if (tmp->val != tmp1->val)
        {

            return false;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    return (tmp == NULL && tmp1 == NULL);
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    node *head1 = NULL;
    node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

    if (samevalue(head, head1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}