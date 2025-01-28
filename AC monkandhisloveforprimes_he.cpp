#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int root = sqrt(n);
    for (int i = 2; i <= root; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    int d = 0, ss = s.size();

    for (int i = 0; i < ss; i++)
    {
        char c = s[i];

        if (isupper(c))
        {
            d -= (c + 32);
        }
        else
        {
            d += (c - 32);
        }
    }

    cout << isPrime(abs(d)) << '\n';

    return 0;
}
