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

    int n, m; cin >> n >> m;

    unordered_multiset<long long> present;

    for (int i = 0; i < n; i++) {
      long long num; cin >> num;

      present.insert(num);
    }

    for (int i = 0; i < m; i++) {
      long long num; cin >> num;

      if (present.find(num) != present.end()) {
        cout << "YES\n";
        
      } else cout << "NO\n";

      present.insert(num);
    }
    

  }

  return 0;
}
