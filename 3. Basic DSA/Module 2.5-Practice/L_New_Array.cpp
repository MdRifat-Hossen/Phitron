#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> C;
    for (int v : b)
    {
        C.push_back(v);
    }
    for (int v1 : a)
    {
        C.push_back(v1);
    }
    for (int w : C)
    {
        cout << w << " ";
    }

    return 0;
}