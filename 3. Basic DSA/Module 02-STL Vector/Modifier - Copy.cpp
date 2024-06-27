#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Most importance Type is;
    // 1.v.push_back()->Add an element to the end.
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 2.v.pop_back()->Remove the last element.
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // 3. v.insert()->Insert elements at a specific position.
    v.insert(v.end(), 40); // time compexity O(N)
    v.insert(v.end(), 4, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // 4.v.erase()->Delete elements from a specific position.
    v.erase(v.begin() + 4); // time compexity O(N)
    for (int i = 0; i < v.size(); i++)
    {
        cout << endl
             << v[i] << endl;
    }

    // 5. find(v.begin(),v.end(),V)->Find the value V. Not under a vector.or Remove the perticular Element.
    auto a = find(v.begin(), v.end(), 100); // time compexity O(N)
    if (a == v.end())
    {
        v.erase(a);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << endl
             << v[i] << " ";
    }

    return 0;
}