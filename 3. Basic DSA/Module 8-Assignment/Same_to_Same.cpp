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
bool iscompere(Node *head, Node *head1)
{
    Node *tmp = head;
    Node *tmp1 = head1;
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

    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

    if (iscompere(head, head1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}