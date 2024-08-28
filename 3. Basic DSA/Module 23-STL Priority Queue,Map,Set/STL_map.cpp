#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"Rimel", 89});
    mp.insert({"lajkat", 9});
    mp.insert({"rifat", 8});
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << endl;
    // }
    cout << mp["rifat"];

    return 0;
}