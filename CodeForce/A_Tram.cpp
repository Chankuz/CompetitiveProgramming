#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, out, come, cur = 0, mx = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> out >> come;
        cur += come - out;
        // cur -= out;
        mx = max(mx, cur);
    }
    cout << mx;

    return 0;
}