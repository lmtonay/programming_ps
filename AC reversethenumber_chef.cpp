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

    int n; cin >> n;
    string r = "";

    while (n) {
      int ld = n % 10;
      r = r + to_string(ld);
      n = n / 10;
    }

    cout << stoi(r) << '\n';
  }

  return 0;
}
