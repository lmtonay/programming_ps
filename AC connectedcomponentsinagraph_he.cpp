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

const int N = 1e5 + 10;

vector<vector<int>> g(N);
bool visited[N] = {false};

void dfs(int v)
{
    if (visited[v])
        return;

    visited[v] = true;
    for (int i : g[v])
    {
        dfs(i);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, e;
    cin >> n >> e;

    int count = 0;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            count++;
            dfs(i);
        }
    }

    cout << count << '\n';

    return 0;
}