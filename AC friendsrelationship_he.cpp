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

    int n, dn; cin >> n;
    dn = n*2;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= dn; j++) {
        if (j > i && j <= dn - i) cout << '#'; else cout << '*';
      }
      cout << '\n';
    }

    cout << '\n';

  }

  return 0;
}
