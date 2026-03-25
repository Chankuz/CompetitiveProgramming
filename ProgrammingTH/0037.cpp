#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, m, l, k, c;
    cin >> n >> m >> l >> k >> c;

    int sum = 0;

    for (int i = 0; i < n * m; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    sum += c * k * l;

    int ans = 1;
    while (ans * c < sum)
    {
        ans++;
    }

    cout << ans;
}