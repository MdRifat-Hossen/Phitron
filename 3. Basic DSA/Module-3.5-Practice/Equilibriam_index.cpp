#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    int left_sum = 0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (left_sum == total_sum - left_sum - arr[i])
        {
            cout << i << endl;
            found = true;
            break;
        }
        left_sum += arr[i];
    }

    if (!found)
    {
        cout << -1 << endl;
    }

    return 0;
}
