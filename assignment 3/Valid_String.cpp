#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int a = 0, b = 0;
    for (char c : s)
    {
        if (c == 'A')
        {
            if (b > 0)
            {
                b--;
            }
            else
            {

                a++;
            }
        }
        else if (c == 'B')
        {
            if (a > 0)
            {
                a--;
            }
            else
            {

                b++;
            }
        }
    }
    return (a == 0 && b == 0);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (check(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}