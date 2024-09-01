#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        for (auto it = v.begin(); it != v.end(); ++it)
        {
            if (it != v.begin())
                cout << " ";
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}