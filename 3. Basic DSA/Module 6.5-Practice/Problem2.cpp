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
void inser_tail(node *&head, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
// cheack double linked list
void cheak_double(node *head)
{
    node *tmp = head;
    unordered_set<int> v;
    bool falg = false;
    while (tmp != NULL)
    {
        if (v.find(tmp->val) != v.end())
        {
            falg = true;
            break;
        }
        v.insert(tmp->val);
        tmp = tmp->next;
    }
    if (falg == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
    while (true)
    {
        int c;
        cin >> c;
        inser_tail(head, c);
        if (c == -1)
        {
            break;
        }
    }
    print_tail(head);
    cheak_double(head);

    return 0;
}