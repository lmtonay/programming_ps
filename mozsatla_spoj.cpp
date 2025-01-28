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
        int n;
        cin >> n;

        int con[n - 1];

        for (int i = 0; i < (n - 1); i++)
        {
            cin >> con[i];
        }

        int val = 1;

        int arr[n];

        for (int i = 0; i < (n - 1); i++)
        {
            arr[i] = val;
            if (con[i] == 1)
                val++;
            else if (con[i] == 2)
                val--;
        }

        arr[n - 1] = val;

        int minVal = *min_element(arr, arr + n);

        for (int i = 0; i < (n - 1); i++)
        {

            if (minVal <= 0)
            {
                cout << arr[i] + abs(minVal) + 1 << ' ';
            }
            else
            {
                cout << arr[i] << ' ';
            }
        }

        if (minVal <= 0)
        {
            cout << arr[n - 1] + abs(minVal) + 1 << '\n';
        }
        else
        {
            cout << arr[n - 1] << '\n';
        }
    }

    return 0;
}
