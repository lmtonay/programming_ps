#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n; string s; cin >> n >> s;

  unordered_multiset<char> keys;

  int kc = 0;

  int dk = n * 2 - 1;

  for (int i = 0; i < dk; i++) {
    if (isupper(s[i])) {
      char key = s[i] + 32;
      if (keys.find(key) != keys.end()) {
        keys.erase(keys.find(key));
      } else {
        kc++;
      }
    } else {
      keys.insert(s[i]);
    }
  }

  cout << kc << '\n';
  

  return 0;
}
