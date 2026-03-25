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
        int x, y;
        cin >> x >> y;
        if (y > x)
        {
            cout << y - x << endl;
        }
        else if (x % y != 0)
        {
            int res = ((x / y) + 1) * y;
            cout << res % x << endl;
        }
        else
        {
            cout << x % y << endl;
        }
    }

    return 0;
}