#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin>> A[i];
    }
    reverse(A.begin(),A.end());
    for(int x: A)
    {
        cout << x << " ";
    }

    return 0;
}