#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s; // একটি সেট নেওয়া হচ্ছে।
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;    // সংখ্যা ইনপুট নিয়ে
        s.insert(x); // সেটে ইনসার্ট করা হচ্ছে। যার কমপ্লেক্সিটি O(logN)।
    }

    for (auto it = s.begin(); it != s.end(); it++) // সেটের শুরু থেকে শেষ পর্যন্ত লুপ চালিয়ে
    {
        cout << *it << endl; // এলিমেন্ট প্রিন্ট করা হচ্ছে।
    }
    return 0;
}