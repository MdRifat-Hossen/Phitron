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
void inser_tail(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void pmin_max(node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < mn)
        {
            mn = tmp->val;
        }
        else
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << mn << " " << mx << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        int c;
        cin >> c;

        if (c == -1)
        {
            break;
        }
        inser_tail(head, tail, c);
    }
    pmin_max(head);

    return 0;
}