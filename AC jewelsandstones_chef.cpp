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

    string j, s; cin >> j >> s;

    int js = j.size();
    int ss = s.size() - 1;
    int res = 0;

    for (; ss >=0; ss--) {
      char l = s[ss];
      for (int i = 0; i < js; i++) {
        if (l == j[i]) {
          res++;
          break;
        }
      }

    }
    
    cout << res << '\n';

  }

  return 0;
}
