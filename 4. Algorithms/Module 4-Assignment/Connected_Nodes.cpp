#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> arr[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q > 0)
    {
        int x;
        cin >> x;

        vector<int> f;
        for (auto v : arr[x])
        {
            f.push_back(v);
        }

        if (f.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(f.begin(), f.end(), greater<int>());
            for (auto v : f)
            {
                cout << v << " ";
            }
            cout << endl;
        }
        q--;
    }

    return 0;
}