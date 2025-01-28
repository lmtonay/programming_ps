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

        int l;
        unsigned long long dec = 0;
        string bin;
        cin >> l >> bin;

        for (int i = l; i; i--)
        {
            int nth = l - i;
            int digit = bin[i - 1] - '0';
            dec += digit * (long long)pow(2, nth);
        }

        cout << dec << '\n';
    }

    return 0;
}
