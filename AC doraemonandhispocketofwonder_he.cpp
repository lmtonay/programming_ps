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
        int N, M;
        cin >> N;
        vector<int> nArr;
        for (int i = 0; i < N; i++)
        {
            int inp;
            cin >> inp;
            nArr.push_back(inp);
        }

        sort(nArr.begin(), nArr.end());

        cin >> M;
        vector<int> res;

        for (int i = 0; i < M; i++)
        {
            int inp;
            cin >> inp;

            for (int j = 0; j < N; j++) {
                auto it = lower_bound(nArr.begin(), nArr.end(), inp);

                if ((int)*it != inp || it == nArr.end()) {
                    break;
                }
                
                res.push_back(*it);
                nArr.erase(it);
            }
        }

        for (int i = 0; i < nArr.size(); i++) {
            res.push_back(nArr[i]);
        }

        printVector(res);
    }

    return 0;
}