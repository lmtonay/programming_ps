#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  int size = n * 2 - 1;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      int minDist = min(min(i, j), min(size - i - 1, size - j - 1));
      cout << n - minDist << " ";
    }
    cout << '\n';
  }

  return 0;
}
