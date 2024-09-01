#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> initialList(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> initialList[i];
    }

    int q;
    cin >> q;

    // Using a min-heap to maintain the elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert the initial list elements into the min-heap
    for (int i = 0; i < n; ++i)
    {
        minHeap.push(initialList[i]);
    }

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            int x;
            cin >> x;
            minHeap.push(x);
            cout << minHeap.top() << endl;
        }
        else if (type == 1)
        {
            if (!minHeap.empty())
            {
                cout << minHeap.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (type == 2)
        {
            if (!minHeap.empty())
            {
                minHeap.pop();
                if (!minHeap.empty())
                {
                    cout << minHeap.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
