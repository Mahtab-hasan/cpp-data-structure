#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // oporer ordhek..//
    int i=0;
    while (i<n/2)
    {
        for (int j = 0;  j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < n-2*(i+1); j++)
        {
            cout << " ";
        }
        cout << "/"<<endl;
        i++;
    }
    
    // moddher ordhek//
    for(int j=0 ; j<n/2 ;j++)
    {
        cout << " ";
    }
    cout << "X"<<endl;

    // nicher ordhek


    for (int i = n/2-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "/";
     
    for (int j = 0; j < n - 2*(i+1); j++)
        {
            cout << " ";
        }
        cout << "\\"<<endl;
    }

    
    return 0;
}
