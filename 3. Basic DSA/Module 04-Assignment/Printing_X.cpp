#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        if (i < n / 2)
        {
            for (int j = 0; j < i; ++j)
            {
                cout << " ";
            }
            cout << "\\";

            for (int j = 0; j < n - 2 - 2 * i; ++j)
            {
                cout << " ";
            }
            cout << "/";
        }
        else if (i == n / 2)
        {
            for (int j = 0; j < i; ++j)
            {
                cout << " ";
            }
            cout << "X";
        }
        else
        {
            for (int j = 0; j < n - 1 - i; ++j)
            {
                cout << " ";
            }
            cout << "/";

            for (int j = 0; j < 2 * (i - n / 2) - 1; ++j)
            {
                cout << " ";
            }
            cout << "\\";
        }
        cout << endl;
    }

    return 0;
}
