#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val, Node *next = NULL, Node *prev = NULL)
    {
        this->val = val;
        this->next = next;
        this->prev = prev;
    }
};

class myStack
{
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

public:
    void push(int val)
    {
        sz++;
        Node *node = new Node(val);

        if (tail == NULL)
        {
            head = node;
            tail = node;
            return;
        }

        tail->next = node;
        node->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete deleteNode;

        sz--;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *node = new Node(val);

        if (tail == NULL)
        {
            head = node;
            tail = node;
            return;
        }

        tail->next = node;
        node->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;

        head = head->next;

        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;

        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack st;
    Queue q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }

    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        q.push(a);
    }

    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}