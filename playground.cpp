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

	set<string> names;

	for (int i = 0; i < n; i++) {
		string name; cin >> name;
		names.insert(name);
	}

	for (auto& it: names)     {
		cout << (it) << '\n';
	}

  }

  return 0;
}
