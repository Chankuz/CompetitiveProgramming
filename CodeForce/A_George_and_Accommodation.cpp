#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (y > x + 1)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}