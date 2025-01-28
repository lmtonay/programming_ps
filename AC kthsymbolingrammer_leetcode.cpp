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

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int flip(int n)
{
    if (n == 1)
        return 0;
    return 1;
}

int kthGrammar(int n, int k)
{
    if (k == 1) return 0;

    int maxK = pow(2, n - 1);

    if (k > maxK / 2)
    {
        k = maxK - k + 1;
        if (n % 2 == 1) {
            return kthGrammar(n - 1, k);
        } else {
            return flip(kthGrammar(n - 1, k));
        }
    } else {
        return kthGrammar(n - 1, k);
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

    int n, k;
    cin >> n >> k;

    cout << kthGrammar(n, k) << '\n';

    return 0;
}
