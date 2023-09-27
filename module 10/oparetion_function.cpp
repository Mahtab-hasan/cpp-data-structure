#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10);
    // sort(myList.begin(), myList.end(),greater<int>()); eita kora jabe na error dibe
    // myList.sort();   //0 theke bor porjonto sajabe ,,
    // myList.sort(greater<int>()); //boro theke 0 porjonto sajabe..
    // myList.unique();  //pasha pashi same value thakle delete kore dey jemon 10 ,10,20 ,30......eikhan theke a ta 10 thakbe porer ta thak be na
    // myList.reverse();    //reverse print kore 
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}