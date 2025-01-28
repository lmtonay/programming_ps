#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string a, b, temp;
  cin >> a >> b;

  cout << a.size() << " " << b.size() << '\n';
  cout << a << b << '\n';
  temp = a;
  a[0] = b[0];
  b[0] = temp[0];

  cout << a << " " << b;

  return 0;
}
