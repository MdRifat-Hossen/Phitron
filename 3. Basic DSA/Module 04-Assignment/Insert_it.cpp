#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int idx;
    cin >> idx;

    v.insert(v.begin() + idx, b.begin(), b.end());

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
