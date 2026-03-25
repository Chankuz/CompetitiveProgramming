#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll res = (n % 2 == 0) ? n / 2 : -1 * ((n + 1) / 2);
    cout << res;

    return 0;
}