#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        long double ans = pow((long double)2, x);
        cout << fixed << setprecision(0) << ans << "\n";
        // long long ans = (2 << (x - 1));
        // cout << ans << endl;
    }

    return 0;
}