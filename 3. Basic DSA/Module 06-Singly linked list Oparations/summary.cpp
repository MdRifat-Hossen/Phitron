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
// Insert at head
void intsert_at_value(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        cout << "Head insert Sucessfull" << endl
             << endl;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    cout << "Inset at tail suncessfully" << endl
         << endl;
}
// Inset at position of linked list
void intsert_at_positon(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalidiat Index" << endl
                 << endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << "Inserte at posistion " << pos << " value " << val << endl
         << endl;
}
// insert at head
void insert_at_heat(node *&head, int val)
{
    node *newanode = new node(val);

    newanode->next = head;
    head = newanode;
    cout << "Head Update suncessfully" << endl
         << endl;
}
// delete at positon
void delate_at_positon(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalite index" << endl
                 << endl;
            return;
        }
    }
    node *deletenode = tmp->next;
    if (tmp->next == NULL)
    {
        cout << "Invaliate index" << endl
             << endl;
    }
    tmp->next = tmp->next->next;
    delete deletenode;
    cout << "Node delete successfully at positon: " << pos << endl
         << endl;
}

// detele at head
void delete_head(node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not availabe" << endl
             << endl;
        return;
    }
    node *deletenode = head;
    head = head->next;
    delete deletenode;
    cout << endl
         << "Head Delete successfully" << endl;
}
// print the list
void print_list(node *head)
{
    node *tmp = head;
    cout << "Your Linked List: ";
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

        cout << " Option 1. Insert at head" << endl;    // done
        cout << " Option 2. Print the List" << endl;    // done
        cout << " Option 3. Inset at position" << endl; // done
        cout << " Option 4. Inset at Head" << endl;     // done
        cout << " Option 5. Delete at positon" << endl; // done
        cout << " Option 7. Delete at Head" << endl;
        cout << " Option 6. Terminate" << endl; // done
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value: ";
            int n;
            while (true)
            {
                cin >> n;
                if (n == -1)
                    break;
                intsert_at_value(head, n);
            }
        }
        else if (op == 2)
        {
            print_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter a positon and value: ";
            cin >> pos >> val;
            if (pos == 0)
            {
                insert_at_heat(head, val);
            }
            else
            {
                intsert_at_positon(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int n;
            cout << "Enter the value: ";
            cin >> n;
            insert_at_heat(head, n);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter the delete positon: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delate_at_positon(head, pos);
            }
        }
        else if (op == 7)
        {
            delete_head(head);
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}