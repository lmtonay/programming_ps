#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string s, r = ""; cin >> s;
  int ss = s.size() - 1;

  for (; ss >= 0; ss--) {
    r.push_back(s[ss]);
  }

  if (s == r) cout << "YES"; else cout << "NO";

  return 0;
}
