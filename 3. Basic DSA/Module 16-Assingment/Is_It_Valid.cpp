#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;

        for (char ch : s)
        {
            if (!st.empty() && ((ch == '1' && st.top() == '0') || (ch == '0' && st.top() == '1')))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}