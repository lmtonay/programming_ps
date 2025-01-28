#include <bits/stdc++.h>
using namespace std;

void printMap(unordered_map<string, int>& mp)
{
  for (const auto &pair : mp)
  {
    cout << pair.first << " -> " << pair.second << endl;
  }
  cout << '\n';
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  unordered_map<string, int> marks;

  for (int i = 0; i < n; i++)
  {
    int X, a;
    string name;
    cin >> X >> name;

    if (X == 1)
    {
      cin >> a;
      marks[name] += a;
    }
    else if (X == 2)
    {
      marks.erase(name);
    }
    else if (marks.find(name) != marks.end())
    {
      cout << marks[name] << '\n';
    }
    else
    {
      cout << "0\n";
    }
    // printMap(marks);
  }

  return 0;
}
