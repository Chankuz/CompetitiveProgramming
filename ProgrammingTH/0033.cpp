#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
const int MAXN = 10001;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, mx = -1;
    cin >> n;
    int hsh[MAXN] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        hsh[m]++;
    }
    for (int s : hsh)
    {
        mx = max(mx, s);
        // cout << s << ' ';
    }

    for (int i = 0; i < MAXN; i++)
    {
        if (hsh[i] == mx)
        {
            cout << i << ' ';
        }
    }

    return 0;
}