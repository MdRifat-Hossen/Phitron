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
    newnode->next = tail;
    tail = newnode;
}
void print_tail(node *head)
{
    int ctn = 0;
    node *tmp = head;
    while (tmp != NULL)
    {
        ctn++;
        tmp = tmp->next;
    }
    cout << ctn;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        int c;
        cin >> c;
        inser_tail(head, tail, c);
        if (c == -1)
        {
            break;
        }
    }
    print_tail(head);

    return 0;
}