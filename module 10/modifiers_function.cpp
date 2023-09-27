#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist ={10,20,30,5,60,40};
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.push_back(100);
    // mylist.push_front(50);
    // list<int> newlist;
    // newlist =mylist;
    // newlist.assign(mylist.begin(),mylist.end());
    // mylist.insert(next(mylist.begin(),2),100);
    //  myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);
    // mylist.erase(next(mylist.begin(),2));
    // for(int val : mylist)
    // {
    //     cout << val <<endl;
    // }
    auto it = find(mylist.begin(), mylist.end(), 60);
    if (it == mylist.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}
