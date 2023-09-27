#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> s;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string n;
            cin >> n;
            s.push(n);
        }
        else if (x == 1)
        {
            if (s.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                string first = s.front();
                s.pop();
                cout << first << endl;
            }
        }
    }

    return 0;
}