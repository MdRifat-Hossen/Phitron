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
void middle_element(node *head, int n)
{
    node *tmp = head;
    int middle_index = n / 2;

    // If the number of elements is even
    if (n % 2 == 0)
    {
        for (int i = 0; i < middle_index - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << "Middle elements: " << tmp->val << " and " << tmp->next->val << endl;
    }
    // If the number of elements is odd
    else
    {
        for (int i = 0; i < middle_index; i++)
        {
            tmp = tmp->next;
        }
        cout << "Middle element: " << tmp->val << endl;
    }
}

int print_tail(node *head)
{
    int ctn = 0;
    node *tmp = head;
    while (tmp != NULL)
    {
        ctn++;
        tmp = tmp->next;
    }
    return ctn;
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
    int count = print_tail(head);
    middle_element(head, count);

    return 0;
}