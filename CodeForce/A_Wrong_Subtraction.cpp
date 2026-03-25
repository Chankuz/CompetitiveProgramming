#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

// 512 4 -> 50
// explanation 512→511→510→51→50
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, n;
    cin >> m >> n;
    while (n--)
    {
        if (m % 10 == 0)
        {
            m /= 10;
        }
        else
        {
            m -= 1;
        }
    }

    cout << m;

    return 0;
}