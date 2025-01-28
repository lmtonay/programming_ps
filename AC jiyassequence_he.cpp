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
    unsigned long long p = 1;

    while (n--)
    {
      int x;
      cin >> x;
      p = p * x;
    }

    int ld = p % 10;

    if (ld == 2 || ld == 3 || ld == 5)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }

  return 0;
}
