#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ctn = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            ctn++;
            break;
        }
    }
    if (ctn == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}