#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m, q;
    cin >> n >> m;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        nums[i] = num % m;
    }

    cin >> q;

    while (q--)
    {
        ll x;
        cin >> x;

        // ...
    }

    return 0;
}