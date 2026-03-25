#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

ll lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, res = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        res = a * res / __gcd(res, a);
    }
    cout << res;
}