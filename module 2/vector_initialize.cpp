#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v; type 1

    // vector<int> v(5); type 2

    // vector<int> v(5,10); type 3

    // vector<int> v2(5,100);
    // vector<int> v(v2);

    // int a[5]={1,2,3,4,5,};
    // vector<int> v(a,a+5 );
    int n;
    cin>> n;
    int a[n];

    for (int i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    
    vector<int> v (a,a+n);

    // vector <int> v={1,10,2};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;


    cout<<v.size()<<endl;
    return 0;
}