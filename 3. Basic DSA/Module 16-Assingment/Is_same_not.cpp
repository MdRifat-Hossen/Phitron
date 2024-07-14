#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> st;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
        cout << "NO";
    else
    {
        bool flag = true;

        while (!q.empty())
        {
            if (q.front() != st.top())
            {
                flag = false;
                break;
            }
            q.pop();
            st.pop();
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}