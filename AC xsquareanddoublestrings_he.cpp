#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int hash[26] = {0};

        int ss = s.size();

        while (ss--)
        {
            hash[s[ss] - 'a']++;
        }

        ss = s.size();

        bool p = false;

        while (ss--)
        {
            if (hash[s[ss] - 'a'] >= 2)
            {
                p = true;
                break;
            }
        }

        if (p == true)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}