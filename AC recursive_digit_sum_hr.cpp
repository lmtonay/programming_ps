#include <bits/stdc++.h>
using namespace std;

long long sup_dig(long long n) {
  if (n / 10 == 0) {
    return n;
  }
  
  long long sd = 0;
  while (n > 9) {
    sd = sd + (n % 10);
    n /= 10;
  }

  sd+=n;

  return sup_dig(sd);
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string n; int k; cin >> n >> k;

  long long iniSum = 0;

  while (n.size()) {
    int ld = n[n.size() - 1] - '0';
    iniSum+= ld;
    n.pop_back();
  }

  iniSum = iniSum * k;

  cout << sup_dig(iniSum) << '\n';

  return 0;
}
