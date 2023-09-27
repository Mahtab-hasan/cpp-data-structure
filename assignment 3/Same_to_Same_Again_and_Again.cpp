#include <bits/stdc++.h>
using namespace std;

bool my_list(int n, int m, int a[], int b[])
{
    if (n != m)
    {
        return false;
    }

    stack<int> s;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        s.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        q.push(b[i]);
    }
    while (!s.empty() && !q.empty())
    {
        int st = s.top();
        int qt = q.front();
        s.pop();
        q.pop();
        if (st != qt)
        {
            return false;
        }
    }
    if (!s.empty() || !q.empty())
    {
        return false;
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    if (my_list(n, m, a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
