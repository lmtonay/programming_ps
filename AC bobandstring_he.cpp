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
    int hash[26] = {0};

    string S, T; cin >> S >> T;
    
    int ss = S.size(); int tt = T.size();

    for (int i = 0; i < ss; i++) {
      hash[S[i] - 'a']++;
      // cout << S[i] - 'a' << endl;
    }

    for (int i = 0; i < tt; i++) {
      hash[T[i] - 'a']--;
    }
    
    int rs = 0;

    for (int i = 0; i < 26; i++) {
      rs+=abs(hash[i]);
    }

    cout << rs << '\n';

  }

  return 0;
}
