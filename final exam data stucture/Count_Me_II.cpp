#include <bits/stdc++.h>
using namespace std;
pair<int, int> fint_most_value(const vector<int> &a)
{
    map<int, int> mp;
    int max = 0;
    int frq = a[0];
    for (int val : a)
    {
        mp[val]++;
        if (mp[val] > max || (mp[val] == max && val > frq))
        {
            max = mp[val];
            frq = val;
        }
    }
    return {frq, max};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pair<int, int> results = fint_most_value(a);
        cout << results.first << " " << results.second << endl;
    }

    return 0;
}