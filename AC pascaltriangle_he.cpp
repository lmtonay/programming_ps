#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ncr(int n, int r)
{
    if (r > n - r)
        r = n - r;

    ll res = 1;

    for (int i = 0; i < r; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

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
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << ncr(i, j) << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
