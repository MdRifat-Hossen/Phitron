// priority Queue is the slt that use HEAP
// complexity Nlog(N)
// This called is heap sort

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max heaper jonno
    priority_queue<int> pq;
    // min heap er jonno

    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            cout << "Insert a Value of Heap" << endl;
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (c == 1)
        {
            pq.pop();
            cout << "Delet Success" << endl;
        }
        else if (c == 2)
        {
            cout << "front value : " << pq.top() << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}