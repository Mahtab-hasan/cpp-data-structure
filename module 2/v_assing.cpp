#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x={10,20,30};
    // vector<int> v={1,2,3};
    // x.pop_back();
    int a[4] = {12,13,14,15};
    vector<int> v(a, a+4);
    
    // for (int  i = 0; i <x.size(); i++)
    // { 
    //     cout<<x[i]<<" ";   
    // }
    
    
    for (int  i = 0; i <v.size(); i++)
    { 
        cout<<v[i]<<" ";   
    }
    

    return 0;
}