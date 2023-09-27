#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> count;
        int duplicate = 0;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            count[v]++;
            if (count[v] > 1)
            {
                duplicate++;
            }
        }
        cout << duplicate << endl;
    }
    return 0;
}