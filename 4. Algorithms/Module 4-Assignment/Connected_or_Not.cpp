#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    set<pair<int, int>> s;
    while (e > 0)
    {
        int x, y;
        cin >> x >> y;
        s.insert({x, y});
        e--;
    }

    int q;
    cin >> q;
    while (q > 0)
    {
        int x, y;
        cin >> x >> y;
        if (x == y || s.count({x, y}) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        q--;
    }
    return 0;
}