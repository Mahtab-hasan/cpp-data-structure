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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count[x]++;
        }
        int thief = 0;
        for (auto val : count)
        {
            if (val.second % 2 != 0)
            {
                thief = val.first;
                break;
            }
        }
        cout << thief << endl;
    }
    return 0;
}