#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
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

    vector<vector<int>> ans;

    void generate(vector<int> &subset, int i, vector<int> &nums, int tgt)
    {
        if (i == nums.size())
        {
            if (accumulate(subset.begin(), subset.end(), 0) == tgt)
                ans.push_back(subset);
            return;
        }

        generate(subset, i + 1, nums, tgt);
        subset.push_back(nums[i]);
        generate(subset, i + 1, nums, tgt);
        subset.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int> &A, int B)
    {
        vector<int> cont;
        generate(cont, 0, A, B);

        return ans;
    }
};

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
        vector<int> A;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
        }
        int sum;
        cin >> sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
        if (result.size() == 0)
        {
            cout << "Empty";
        }
        for (int i = 0; i < result.size(); i++)
        {
            cout << '(';
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j];
                if (j < result[i].size() - 1)
                    cout << " ";
            }
            cout << ")";
        }
    }
}
