#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> likendlist;
    int v;
    while (cin >>v && v!= -1)
    {
        likendlist.push_back(v);
    }
    likendlist.sort();
    likendlist.unique();
    for(auto it= likendlist.begin();it != likendlist.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}