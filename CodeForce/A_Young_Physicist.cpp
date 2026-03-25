#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;
    vector<vector<int>> res(m, vector<int>(3, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> res[i][j];
        }
    }

    bool validate;
    for (int i = 0; i < 3; i++)
    {
        validate = true;
        int checker = 0;
        for (int j = 0; j < m; j++)
        {
            checker += res[j][i];
        }
        if (checker != 0)
        {
            validate = false;
            break;
        }
    }
    if (validate)
        cout << "YES";
    else
        cout << "NO";

    // cout << res;

    return 0;
}