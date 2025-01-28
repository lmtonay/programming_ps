#include <bits/stdc++.h>
using namespace std;

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

class Solution
{
public:
  int sumOfRowCol(int N, int M, vector<vector<int>> A)
  {
    int mi = min(N, M);

    int cs[M] = {0}, rs[N] = {0};

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < M; j++)
      {
        rs[i] = rs[i] + A[i][j];
        cs[j] = cs[j] + A[i][j];
      }
    }

    for (int k = 0; k < mi; k++)
    {
      if (cs[k] != rs[k])
        return 0;
    }

    return 1;
  }
};

int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        cin >> A[i][j];
    Solution ob;
    cout << ob.sumOfRowCol(N, M, A) << "\n";
}