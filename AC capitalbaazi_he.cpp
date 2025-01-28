#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string s;
  getline(cin, s);
  int ss = s.size();

  string temp = "";

  for (int i = 0; i < ss; i++)
  {
    if (s[i] != ' ')
    {
      temp.push_back(toupper(s[i]));
    }
    else
    {
      cout << temp << '\n';
      temp = "";
    }
  }

  cout << temp;

  return 0;
}
