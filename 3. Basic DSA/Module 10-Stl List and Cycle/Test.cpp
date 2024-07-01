// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //   constructor
//     list<int> myList;
//     // cout << myList.size();
//     // list<int> mylist(10, 5);
//     int a[5] = {10, 20, 30, 40, 50};
//     vector<int> v = {1, 20, 30};
//     // list<int> mylist(a, a + 5);
//     list<int> mylist(v.begin(), v.end());
//     // cout << endl
//     //      << mylist.front();
//     for (auto it = mylist.begin(); it != mylist.end(); it++)
//     {
//         cout << *it
//              << endl;
//     }
//     return 0;
// }

// Modifier

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // delte head, and tail
//     list<int> list1 = {10, 20, 30, 40, 50};
//     // list1.push_back(200);
//     // list1.push_front(300);
//     // list1.pop_back();

//     // list1.pop_front();
//     // list1.insert(list1.begin()+3,40); eta use hoy only indext of array
//     // list1.insert(next(list1.begin(), 2), 100);
//     // list1.erase(list1.begin()+3);ata kaj korbe na becouse this linked list
//     list1.erase(next(list1.begin(), 2));
//     for (int i : list1)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// Operation LIst

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {10, 10, 20, 30, 4, 4, 5};
    // list1.remove(0);
    list1.sort();
    // list1.sort(greater<int>());
    list1.unique();
    for (int val : list1)
    {
        cout << val << " ";
    }

    return 0;
}