#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.Returns the size of the vector.
    /*vector<int> v;
    cout << v.size();
    cout << v.max_size();*/
    // 2. Returns the current available capacity of the vector.
    vector<int> v;
    v.push_back(10);
    // cout << v.capacity() << " ";
    v.push_back(20);
    // cout << v.capacity() << " ";
    v.push_back(30);
    // 3. Clears the vector elements. Do not delete the memory, only clear the value.
    // v.clear(); // time Complexity O(N);
    // cout << v.capacity() << " ";
    // 4. Change the size of the vector.
    v.resize(2);
    v.resize(2, 30);
    // v.resize(4, 40);
    for (int i = 0; i < v.size(); i++) // time coplexity O(K)
    {
        cout << v[i] << " ";
    }
    v.clear();
    if (!v.empty())
    {
        cout << endl
             << "This is full Vector" << endl;
    }
    else
        cout << "YEs This is empty ";

    return 0;
}