#include <iostream>
#include <list>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<int> list1;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            list1.push_front(v);
        }
        else if (x == 1)
        {
            list1.push_back(v);
        }
        else if (x == 2)
        {
            if (v < list1.size())
            {
                auto it = list1.begin();
                for (int i = 0; i < v; ++i)
                {
                    ++it;
                }
                list1.erase(it);
            }
        }

        if (list1.empty())
        {
            cout << "L -> " << endl;
            cout << "R -> " << endl;
        }
        else
        {

            cout << "L -> ";
            for (auto it : list1)
            {
                cout << it << " ";
            }
            cout << endl;

            cout << "R -> ";
            for (auto it = list1.rbegin(); it != list1.rend(); ++it)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
