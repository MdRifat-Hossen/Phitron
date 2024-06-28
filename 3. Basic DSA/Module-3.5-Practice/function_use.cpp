#include <bits/stdc++.h>
using namespace std;
void prefixsum(vector<int> &v, int n)
{
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    for (int i : pre)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    prefixsum(v, n);
    return 0;
}