#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n; cin >> n;

  unordered_map<string, int> users;

  for (int i = 0; i < n; i++) {
    string name; cin >> name;

    users[name]++;

    if (users[name] < 2) cout << "OK" << '\n';
    else cout << name << users[name] - 1 << '\n';
  }

  return 0;
}
