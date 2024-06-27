
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     /*type 1*/
//     /*-----------------------
//      vector<int> v;
//      cout << v.size();*/

//     // type 2-Construct a vector with N elements and the value will be garbage.

//     /* vector<int> v(5);
//      cout << v.size();
//      for (int i = 0; i < v.size(); i++)//time complexity O(N)
//      {
//          cout << v[i];
//      }*/

//     // Type 3Construct a vector with N elements and the value will be V.
//     // vector<type>v(N,V);
//     /* vector<int> v(5, 10);
//      cout << v.size();
//      for (int i = 0; i < v.size(); i++)//time complexity O(N)
//      {
//          cout << v[i];
//      }*/

//     // Type 04 Construct a vector by copying another vector v2.
//     // vector<type>v(v2);
//     /* vector<int> v1(5, 100);
//      vector<int> v(v1);
//      cout << v.size();
//      for (int i = 0; i < v.size(); i++) //Time complexity O(N)
//      {
//          cout << v[i] << " ";
//      }*/

//     // Type 05 Construct a vector by copying all elements from an array A of size N.

//     // vector<type>v(A,A+N);
//     int a[6] = {1, 2, 3, 4, 5, 6};
//     vector<int> v(a, a + 6);
//     for (int i = 0; i < v.size(); i++) // Time Complexity O(N)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   construction of array in this section
    int n;
    cin >> n;
    // int ar[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    // }
    vector<int> v1(n);
    for (int i = 0; i < v1.size(); i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    vector<int> v(v1); // copy fro, the anaother array
    cout << v.size() << endl;
    for (int c : v)
    {
        cout << c << " ";
    }
    return 0;
}