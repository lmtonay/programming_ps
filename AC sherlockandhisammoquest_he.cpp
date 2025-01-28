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

    int n;
    cin >> n;

    map<int, multiset<string>> list;

    for (int i = 0; i < n; i++)
    {
        int j;
        string name;

        cin >> name >> j;

        list[j * -1].insert(name);
    }

    for (auto &p : list)
    {
        for (auto &name : p.second)
        {
            cout << name << ' ' << p.first * -1 << '\n';
        }
    }

    return 0;
}