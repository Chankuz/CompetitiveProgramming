#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, idx, cnt = 0;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == m - 1)
        {
            idx = arr[i];
        }
    }
    for (int k : arr)
    {
        if (k >= idx && k > 0)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}