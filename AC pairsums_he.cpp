#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << ' ';
  }
  cout << endl;
}

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << ' ';
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

  int n, k;
  cin >> n >> k;

  int lp = 0, rp = n - 1;

  int nums[n];

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  sort(nums, nums + n);

  while (lp != rp)
  {
    int s = nums[lp] + nums[rp];

    if (s == k)
    {
      cout << "YES";
      return 0;
    }
    else if (s > k)
    {
      rp--;
    }
    else
    {
      lp++;
    }
  }

  cout << "NO";

  return 0;
}