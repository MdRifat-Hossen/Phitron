#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool flag = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            flag = false;
        }
        st.pop();
        q.pop();
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}