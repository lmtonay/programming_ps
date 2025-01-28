#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        int gc, pc, n;
        cin >> gc >> pc >> n;

        int ac = 0, bc = 0;

        for (int i = 0; i < 10; i++)
        {
            int a, b;
            cin >> a >> b;

            ac += a;
            bc += b;
        }

        cout << max(ac, bc) * min(gc, pc) + min(ac, bc) * max(gc, pc) << endl;
    }

    return 0;
}
