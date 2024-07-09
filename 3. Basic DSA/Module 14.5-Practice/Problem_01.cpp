#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    myStack st1;
    int m;
    cin >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    bool flag = true;
    while (!st.empty())
    {
        if (st.top() != st1.top())
        {
            flag = false;
            break;
        }
        st1.pop();
        st1.pop();
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}