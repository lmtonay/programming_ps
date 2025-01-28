#include <bits/stdc++.h>
using namespace std;

void printVector(vector<char> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

void print2dVector(vector<vector<char>> &v)
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

bool isValidSudoku(vector<vector<char>> &board)
{
    for (int i = 0; i < 9; i++)
    {
        vector<char> row = board[i];

        unordered_set<char> s;
        unordered_multiset<char> ms;

        for (int j = 0; j < 9; j++)
        {
            if (row[j] != '.')
            {
                s.insert(row[j]);
                ms.insert(row[j]);
            }
        }

        if (s.size() != ms.size())
            return false;
    }

    for (int i = 0; i < 9; i++)
    {
        vector<char> col;


        for (int j = 0; j < 9; j++)
        {
            col.push_back(board[j][i]);
        }

        unordered_multiset<char> ms;
        unordered_set<char> s;

        for (int j = 0; j < 9; j++)
        {
            if (col[j] != '.')
            {
                s.insert(col[j]);
                ms.insert(col[j]);
            }
        }

        if (s.size() != ms.size())
            return false;
    }

    for (int i = 0; i < 9; i = i + 3)
    {
        for (int j = 0; j < 9; j = j + 3)
        {
            vector<char> box;

            box.push_back(board[i][j]);
            box.push_back(board[i + 1][j]);
            box.push_back(board[i + 2][j]);
            box.push_back(board[i][j + 1]);
            box.push_back(board[i + 1][j + 1]);
            box.push_back(board[i + 2][j + 1]);
            box.push_back(board[i][j + 2]);
            box.push_back(board[i + 1][j + 2]);
            box.push_back(board[i + 2][j + 2]);

            unordered_multiset<char> ms;
            unordered_set<char> s;

            for (int j = 0; j < 9; j++)
            {
                if (box[j] != '.')
                {
                    s.insert(box[j]);
                    ms.insert(box[j]);
                }
            }

            if (s.size() != ms.size())
                return false;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::vector<std::vector<char>> board = {
        {'.', '.', '4', '.', '.', '.', '6', '3', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'5', '.', '.', '.', '.', '.', '.', '9', '.'},
        {'.', '.', '.', '5', '6', '.', '.', '.', '.'},
        {'4', '.', '3', '.', '.', '.', '.', '.', '1'},
        {'.', '.', '.', '7', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '5', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'}};

    cout << isValidSudoku(board);

    return 0;
}
