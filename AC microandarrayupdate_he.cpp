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

    int N, K;
    cin >> N >> K;

    int min = K;

    for (int i = 0; i < N; i++)
    {
      int ip;
      cin >> ip;

      if (ip < min) min = ip;
    }

    cout << (K - min) << '\n';
  }

  return 0;
}
