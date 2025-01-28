#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int q;
  cin >> q;

  unordered_set<int> store;

  while (q--)
  {

    int ac, n; cin >> ac >> n;

    if (ac == 1) {
      store.insert(n);
    } else if (ac == 2) {
      store.erase(n);
    } else if (store.find(n) != store.end()) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }

  }

  return 0;
}
