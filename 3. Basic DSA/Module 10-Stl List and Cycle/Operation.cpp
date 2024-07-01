#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.mylist.remove(v)->Remove the value V from the list
    list<int> mylist = {20, 80, 60, 30, 30, 30, 40};
    // vector<int> mylist = {20, 80, 60, 30, 40, 50};
    //  mylist.remove(20);
    //  for (int val : mylist)
    //  {
    //      cout << val << endl;
    //  }

    // 2.mylist.sort->sort list in ascending oreder
    // sort(mylist.begin(), mylist.end());
    // mylist.sort();
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    // 3. mylist.sort(greate<int>())->disecnding order sort list
    // mylist.sort(greater<int>());
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    // 4.myList.unique()-> Delete the duplicate values from the list.befor MUST he sort
    // mylist.sort();
    // mylist.unique();
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    // 5.myList.reverse() Reverse the list
    mylist.reverse();
    for (int val : mylist)
    {
        cout << val << endl;
    }

    return 0;
}