#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        vector<int> c(r);

        for (int i = 0; i < r; ++i)
        {
            string row;
            cin >> row;

            for (int j = 0; j < row.size(); ++j)
            {
                if (row[j] == '#')
                {
                    c[i] = j + 1;
                    break;
                }
            }
        }

        for (int i = r - 1; i >= 0; --i)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
