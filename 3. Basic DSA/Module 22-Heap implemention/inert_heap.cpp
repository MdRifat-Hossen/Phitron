#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        // cout<<cur_idx<<endl;

        // cout<<perent_idx<<endl;
        // cout << " original Array: ";
        // for (int i : v)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        while (cur_idx != 0)
        {
            int perent_idx = (cur_idx - 1) / 2;

            if (v[perent_idx] < v[cur_idx])
            {
                swap(v[perent_idx], v[cur_idx]);
            }
            else
            {
                break;
            }
            cur_idx = perent_idx;
        }
    }
    // int x;
    // cin >> x;
    // v.push_back(x);
    // int cur_idx = v.size() - 1;
    // // cout<<cur_idx<<endl;

    // // cout<<perent_idx<<endl;
    // cout << " original Array: ";
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // while (cur_idx != 0)
    // {
    //     int perent_idx = (cur_idx - 1) / 2;

    //     if (v[perent_idx] < v[cur_idx])
    //     {
    //         swap(v[perent_idx], v[cur_idx]);
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     cur_idx = perent_idx;
    // }
    cout << " After Opearation Array: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}