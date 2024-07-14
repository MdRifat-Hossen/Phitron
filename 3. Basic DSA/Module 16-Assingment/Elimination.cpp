#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string S;
        cin >> S;

        stack<char> st;
        bool isValid = true;

        for (char ch : S)
        {
            if (ch == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
            else
            {
                st.push(ch);
            }
        }

        if (!st.empty())
        {
            isValid = false;
        }

        if (isValid)
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
