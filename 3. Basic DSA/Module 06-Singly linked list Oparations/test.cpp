// // #include<bits/stdc++.h>
// // using namespace std;
// // class node{
// //     public:
// //     int val;
// //     node* next;
// //     node(int val)
// //     {
// //         this->val=val;
// //         this->next=NULL;

// //     }

// // };
// // int main()
// // {
// //     node a(10);
// //     node b(20);
// //     node c(30);
// //     a.next=&b;
// //     b.next=&c;
// //     cout<<a.val<<endl;
// //     cout<<a.next->val<<endl;
// //     cout<<a.next->next->val<<endl;

// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val)
//     {
//         this->val=val;
//         this->next=NULL;

//     }

// };
// int main()
// {
//     node* head=new node(10);
//     node* a=new node(20);
//     head->next=a;
//     node* tmp=head;

//     while(head!=NULL);
//     {
//         cout<<tmp->val<<endl;
//         tmp=tmp->next;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void fun(int* &n)
// {
//     //*n=20;
//     *n=20;
// }
// int main()
// {
//     int c=10;
//     int* ptr=&c;
//     fun(ptr);
//     cout<<*ptr;

//     return 0;

// }

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
void insert_at_tail(node *&head, int val)
{
    node *newnode = new node(val);
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
void print_value(node *head)
{
    cout << endl
         << endl
         << "Linked list: ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void inser_at_position(node *head, int pos, int n)
{
    node *newnode = new node(n);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalide Index" << endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << endl
         << endl
         << "value inserted " << pos << " " << n << endl;
}
void insert_a_head(node *&head, int v)
{
    node *newnode = new node(v);
    newnode->next = head;
    head = newnode;
    cout << endl
         << "Head Inserted" << endl;
}
void delete_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalite Possition" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "Invalite Possition" << endl;
        return;
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    cout << endl
         << "Position is delete" << endl;
}
void delete_head(node *&head)
{
    if (head == NULL)
    {
        cout << "head is not available" << endl;
        return;
    }
    node *deletehead = head;
    head = head->next;
    delete deletehead;
    cout << endl
         << " Head Deleted" << endl;
}
int main()
{
    node *head = NULL;
    while (true)
    {
        cout << endl
             << "Op 1: insert a tail " << endl;
        cout << "Op 2: Print the value" << endl;
        cout << "OP 3:insert a possiton of value" << endl;
        cout << "op 4: indert a head" << endl;
        cout << "Op 5: Delete a position of node" << endl;
        cout << "Op 6: Delete head" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int c;
            cout << "Enter the value:";
            cin >> c;
            insert_at_tail(head, c);
        }
        else if (op == 2)
        {
            print_value(head);
        }
        else if (op == 3)
        {

            int pos, value;
            cout << "Enter the postion:";
            cin >> pos;
            cout << "Enter the value:";
            cin >> value;
            if (pos == 0)
            {
                insert_a_head(head, value);
            }
            else
            {
                inser_at_position(head, pos, value);
            }
        }

        else if (op == 4)
        {
            int n;
            cout << "Enter the head: ";
            cin >> n;
            insert_a_head(head, n);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter the delete position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
    }

    return 0;
}