#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int w; cin >> w;

  if (w % 2 == 0 && w > 3) cout << "YES";
  else cout << "NO";

  return 0;
}
