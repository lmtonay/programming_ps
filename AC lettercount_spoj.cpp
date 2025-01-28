#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string s;
  cin >> s;
  int ss = s.size();

  int hash[100] = {0};
  pair<int, int> max = {0, 0};

  for (int i = 0; i < ss; i++)
  {
    hash[s[i] - 'A']++;
  }

  for (int i = 99; i; i--)
  {
    if (hash[i] >= max.first) {
      max = {hash[i], i};
    }
  }

  cout << (char)(max.second + 'A') << '\n';

  return 0;
}
