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

// void delete_val(Node *&head)
// {
//     if (head == NULL)
//         return;

//     Node *current = head;
//     while (current != NULL)
//     {
//         Node *runner = current;
//         while (runner->next != NULL)
//         {
//             if (runner->next->val == current->val)
//             {
//                 Node *deletenode = runner->next;
//                 runner->next = runner->next->next;
//                 delete deletenode;
//             }
//             else
//             {
//                 runner = runner->next;
//             }
//         }
//         current = current->next;
//     }
// }
void delete_val(Node *&head)
{
    set<int> v;
    Node *tmp = head;
    while (tmp != NULL)
    {
        v.insert(tmp->val);
        tmp = tmp->next;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
}

// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

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
    delete_val(head);
    // print_linked_list(head);
    return 0;
}
