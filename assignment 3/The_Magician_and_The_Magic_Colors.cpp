#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n >> str;
        char prev = '\0';
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            char cur = str[i];
            if (prev == cur)
            {
                // Two same colors vanish each other
                ans = "";
                break;
            }
            else
            {
                // Check if two colors mix up
                if (cur == 'R' && prev == 'B')
                {
                    ans += 'P';
                }
                else if (cur == 'R' && prev == 'G')
                {
                    ans += 'Y';
                }
                else if (cur == 'B' && prev == 'G')
                {
                    ans += 'C';
                }
                else
                {
                    ans += cur;
                }
                prev = cur;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
