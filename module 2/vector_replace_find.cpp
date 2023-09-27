#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,2,3,4,5,2,3,5,3,1,2,1,6,2};

    // // replace(v.begin(),v.end(),2,100);
    // replace(v.begin(),v.end()-1,2,100);
    // cout << v.size()<<endl ;

    // for(int x : v)
    // {
    //     cout << x << " ";
    // }

    vector<int> v={1,2,3,4,5,2,3,5,3,1,2,1,6,2};

    vector<int> :: iterator it;

        it = find(v.begin(),v.end(),6);
        if (it == v.end()) cout << "NOT FOUND ";
        else cout << "FOUND";
        
        

    return 0;
}