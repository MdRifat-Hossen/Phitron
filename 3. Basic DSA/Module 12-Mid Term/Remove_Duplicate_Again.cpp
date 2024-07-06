#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;
        list1.push_back(val);
    }
    list1.sort();
    list1.unique();

    for (int i : list1)
    {
        cout << i << " ";
    }

    return 0;
}