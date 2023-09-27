#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int count[26] = {0};
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
                count[c - 'a']++;
            }
        }
        string val = "";
        for (int i = 0; i < 26; i++)
        {
            val += string(count[i], 'a' + i);
        }
        cout << val << endl;
    }

    return 0;
}