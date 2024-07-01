mylist.insert(next(mylist.begin(), 2), 50);
    mylist.pop_back();
    mylist.pop_front();
    mylist.erase(next(mylist.begin(), 2));
    mylist.remove(10);
    mylist.sort();
    mylist.sort(greater<int>());