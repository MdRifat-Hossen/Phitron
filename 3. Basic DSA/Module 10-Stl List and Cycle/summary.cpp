#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist = {10, 20, 30, 40};
    mylist.push_front(100);
    mylist.push_back(200);
    mylist.insert(next(mylist.begin(), 2), 50);
    mylist.pop_back();
    mylist.pop_front();
    mylist.erase(next(mylist.begin(), 2));
    mylist.remove(10);
    mylist.sort();
    mylist.sort(greater<int>());
    mylist.unique();
    mylist.reverse();
    auto it = find(mylist.begin(), mylist.end(), 10);

    for (int val : mylist)
    {
        cout << val << " ";
    }

    return 0;
}