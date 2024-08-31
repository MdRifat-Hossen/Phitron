#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); // directed doesnt exist
    }
    // for(int i=0;i<v[0].size();i++){
    //     cout<< v[0][i]<<" ";
    // }
    for (int i : v[0])
    {
        cout << i << " ";
    }

    return 0;
}