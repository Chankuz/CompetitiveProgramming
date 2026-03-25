#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string base = "codeforces";
    int n;
    cin >> n;
    while (n--)
    {
        string toggle;
        int cnt = 0;
        cin >> toggle;
        for (int i = 0; i < base.length(); i++)
        {
            if (toggle[i] != base[i])
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}