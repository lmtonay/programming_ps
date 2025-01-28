#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n; cin >> n;

  int r = n % 4;

  if (r == 1 || r == 2) cout << "1" << endl;
  else cout << "0" << endl;

  return 0;
}
