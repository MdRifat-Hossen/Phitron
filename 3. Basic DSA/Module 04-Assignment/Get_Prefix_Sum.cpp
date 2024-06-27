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
    vector<long long> p(n);
    p[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = v[i] + p[i - 1];
    }
    //   sort(p.begin(),p.end());
    for (int i = n - 1; i >= 0; i--)
    {
        cout << p[i] << " ";
    }

    return 0;
}