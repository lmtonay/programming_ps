#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

void print2dVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void print2dArray(int a[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i * m + j] << ' ';
        }
        cout << '\n';
    }
}

int func(vector<int> &coins, int a, int d, vector<int> &dp)
{
    if (a < 0)
        return INT_MAX;
    if (dp[a] != -1)
        return dp[a];
    if (a == 0)
        return dp[a] = d;

    int minimum = INT_MAX;

    for (int coin : coins)
    {
        minimum = min(func(coins, a - coin, d + 1, dp), minimum);
    }

    return dp[a] = minimum;
}

int coinChange(vector<int> &coins, int amount)
{
    const int N = 1e4 + 10;

    vector<int> dp(N, -1);

    int r = func(coins, amount, 0, dp);

    if (r == INT_MAX)
    {
        return -1;
    }

    return r;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, n;
    vector<int> coins;

    cin >> a >> n;

    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        coins.push_back(inp);
    }

    cout << coinChange(coins, a) << endl;

    return 0;
}