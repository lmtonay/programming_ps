#include <bits/stdc++.h>
using namespace std;

int isPalindrome (string s) {
  string r = "";
  int ss = s.size() - 1;

  for (; ss >= 0; ss--) {
    r.push_back(s[ss]);
  }

  if (r == s) return true;
  else return false;
  
}

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

    int n; cin >> n;

    bool res = true;

    string rows[n];

    for (int i = 0; i < n; i++) {
      cin >> rows[i];

      if (!isPalindrome(rows[i])) {
        res = false;
      }
    }

    for (int i = 0; i <= n/2; i++) {
      if (rows[i] != rows[(n - 1) - i]) res = false;
      // cout << rows[i] << ' ' << rows[(n - 1) - i];
    }

    if (res) cout << "YES\n"; else cout << "NO\n";
    

  }

  return 0;
}
