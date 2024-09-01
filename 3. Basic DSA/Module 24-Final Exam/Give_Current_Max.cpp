#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int age;
    int marks;
};

class cmp
{
public:
    bool operator()(student &a, student &b)
    {
        if (a.marks == b.marks)
        {
            return a.age > b.age;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<student> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].name >> v[i].age >> v[i].marks;
    }
    int q;
    cin >> q;
    priority_queue<student, vector<student>, cmp> maxHeap;

    for (auto i : v)
    {
        maxHeap.push(i);
    }
    while (q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            student s;
            cin >> s.name >> s.age >> s.marks;
            maxHeap.push(s);
            if (!maxHeap.empty())
            {
                auto top = maxHeap.top();
                cout << top.name << " " << top.age << " " << top.marks << endl;
            }
        }
        else if (type == 1)
        {
            if (!maxHeap.empty())
            {
                auto top = maxHeap.top();
                cout << top.name << " " << top.age << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (type == 2)
        {
            if (!maxHeap.empty())
            {
                maxHeap.pop();
                if (!maxHeap.empty())
                {
                    auto top = maxHeap.top();
                    cout << top.name << " " << top.age << " " << top.marks << endl;
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
