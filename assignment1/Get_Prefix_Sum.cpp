#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<long long int> sum (a.begin(),a.end());
    sum[0]=a[0];
    for (int i = 1; i < n; i++)
    {
          sum[i] += sum[i - 1];
    }

    reverse(sum.begin(),sum.end());

    for (int i = 0; i < n; i++) 
    {
        cout << sum[i] << " ";
    }
    
    
    return 0;
}

