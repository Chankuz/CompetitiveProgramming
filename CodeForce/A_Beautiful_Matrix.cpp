#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m = 5, n = 5;
    int idx_i = -1, idx_j = -1;
    vector<vector<int>> vec(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
            if (vec[i][j] == 1)
            {
                idx_i = i;
                idx_j = j;
            }
        }
    }

    // 2,2 -> 0
    // 1,4 -> 3 (1 - 2) + (4 - 2) = 1+2 = 3
    // 2,1 -> 1
    // 4,4 -> 4
    cout << abs(abs(idx_i - 2) + abs(idx_j - 2));

    return 0;
}