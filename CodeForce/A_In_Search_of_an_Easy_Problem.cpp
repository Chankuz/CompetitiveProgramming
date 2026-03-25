#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cur = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cur += x;
    }

    string res = (cur > 0) ? "HARD" : "EASY";
    cout << res;

    return 0;
}