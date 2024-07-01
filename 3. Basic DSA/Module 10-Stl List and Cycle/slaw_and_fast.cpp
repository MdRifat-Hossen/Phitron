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
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    head->next = a;

    a->next = b;

    b->next = c;

    c->next = a;
    // c->next = NULL;

    node *slow = head;
    node *fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; // Time complexity O(N);
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "cycle Detected" << endl;
    }
    else
        cout << "NO";

    return 0;
}