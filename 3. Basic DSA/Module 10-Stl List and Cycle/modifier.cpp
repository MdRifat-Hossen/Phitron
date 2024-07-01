#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   1.myList= ormyList.assign(list2.begin(),list2.end())
    list<int> mylist = {
        10,
        20,
        30,
        40,
        50,
        60,
    };
    // list<int> newlist;
    // // newlist = mylist;
    // newlist.assign(mylist.begin(), mylist.end());
    // for (int val : newlist)
    // {
    //     cout << val << endl;
    // }

    // 2.myList.push_back()->Add an element to the tail.
    // mylist.push_back(40);
    // mylist.push_front(90);

    // mylist.pop_back();  // myList.pop_back() Delete the tail
    // mylist.pop_front(); // myList.pop_front() Delete the head.
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    // 3.myList.insert()-> Insert elemeat at a specific position
    // mylist.insert(next(mylist.begin(), 0), 40);
    // list<int> newlist = {1, 2, 3};
    // mylist.insert(next(mylist.begin(), 1), newlist.begin(), newlist.end());
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    // 4.myList.erase()->Delete at spacific position
    // mylist.erase(next(mylist.begin(), 3));
    // akdik value delete korte
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5));
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    //}

    // 5.replace(myList.begin(),myList.end(),value,replace_value)->Replace all the value with raplace_value
    // jei value ta dibo oita list a thaka lagbe;
    // replace(mylist.begin(), mylist.end(), 70, 100);
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }

    // 6.fin(mylist.begin(),mylist,end(),val)-> fint the vauleu of list
    // this find stl are always get itarator
    auto it = find(mylist.begin(), mylist.end(), 0);
    if (it == mylist.end())
    {
        cout << "not found " << *it << endl;
    }
    else
    {
        cout << "yes " << *it << endl;
    }
    return 0;
}