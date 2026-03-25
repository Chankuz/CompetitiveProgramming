#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, cnt = 0;
    cin >> m >> n;
    while (m < n)
    {
        n = n * 2;
        m = m * 3;
        if (m > n)
        {
            break;
        }
        // cout << m << " " << n;
        cnt++;
    }
    cout << cnt + 1;

    return 0;
}