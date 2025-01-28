#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

void printArray(int a[])
{
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--)
  {
  }

  return 0;
}
