#include<bits/stdc++.h>
using namespace std;

string print(vector<int>& a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if(count(a.begin(),a.end(),a[i]) > 1)
        {
            return "YES";
        }
    }
    return "NO";
    
}

// {
//     int n = a.size();

//     for (int i = 0; i < n; i++)
//     {
//         if (count(a.begin(), a.end(), a[i]) > 1)
//         {
//             return "YES";
//         }
//     }
//     return "NO";
// }
// string print(vector<int>& a)
// {
    
    
//     // vector<int> mn;
//     unordered_set<int> mn;

//     for (int d : a)
//     {   
//         if(mn.find(d) != mn.end() )
//         {
//             return "YES";
//         }
//         mn.insert(d);
//     }
//     return "NO";
// }

int main()
{
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    string x = print(a)  ;
    cout << x << " ";

    return 0;
}