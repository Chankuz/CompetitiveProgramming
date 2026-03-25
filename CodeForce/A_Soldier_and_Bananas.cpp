#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, w, sum, res;
    cin >> k >> n >> w;
    sum = ((w * (w + 1)) / 2) * k;
    res = (n - sum > 0) ? 0 : abs(n - sum);
    cout << res;
    return 0;
}