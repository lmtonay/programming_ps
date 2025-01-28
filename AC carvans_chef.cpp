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

    int n;
    cin >> n;

    int s[n];
    int hsc = 0;

    for (int i = 0; i < n; i++)
    {
      int ip;
      cin >> ip;

      if (i == 0 || s[i - 1] >= ip)
      {
        s[i] = ip;
        hsc++;
      } else {
        s[i] = s[i - 1];
      }
    }

    cout << hsc << '\n';
  }

  return 0;
}
