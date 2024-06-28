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
// sort a linked list in assecnding order
void sorted_list(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    for (node *current = head; current->next != NULL; current = current->next)
    {
        for (node *next = current->next; next != NULL; next = next->next)
        {
            if (current->val > next->val)
            {

                int tmp = current->val;
                current->val = next->val;
                next->val = tmp;
            }
        }
    }
}
void print_list(node *head)
{
    int ctn = 0;
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
    cout << "Original list: " << endl;
    print_list(head);

    sorted_list(head);

    cout << "Sorted list: " << endl;
    print_list(head);
    return 0;
}