#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.list<type>myList; Construct a list with 0 elements.
    /* list<int> mylist;
     cout << mylist.size();
     */

    // 2. ist<type>myList(N); Construct a list with N elementsand the value will be garbage
    /*
    list<int> mylist(4);
    cout << mylist.size();
    */

    // 3.list<type>myList(N,V); Construct a list with N elements and the value will be V.
    // list<int> mylist(4, 5);
    // for(int i=0;i<mylist.size();i++)
    // {
    //     cout<<mylist[i];
    // }
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // 4.list<type>myList(list2); Construct a list by copying another list list2
    // list<int> list2 = {1, 2, 3, 4, 5, 6};
    // list<int> mylist(list2);
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // 5.list<type>myList(A,A+N);Construct a list by copying all elements from an array A of size N
    // vector theke jodi niya asi
    vector<int> v = {10, 20, 30, 40, 50};
    // int list2[6] = {10, 20, 30, 40, 50};
    list<int> mylist(v.begin(), v.end());
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // shortcut
    int sum = 0;
    for (int val : mylist)
    {
        sum += val;
    }
    cout << sum;

    return 0;
}