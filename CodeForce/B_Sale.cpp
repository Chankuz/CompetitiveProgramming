#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, money = 0;
    cin >> n >> m;
    vector<int> vn(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }

    sort(vn.begin(), vn.end());
    for (int i = 0; i < m; i++)
    {
        if (vn[i] < 0)
            money += abs(vn[i]);
        else
            break;
    }
    cout << money;

    return 0;
}