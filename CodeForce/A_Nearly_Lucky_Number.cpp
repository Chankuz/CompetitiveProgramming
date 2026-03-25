
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt = 0, len;
    string s;
    cin >> s;
    len = s.length();
    for (char k : s)
    {
        if (k == '4' || k == '7')
        {
            cnt++;
        }
    }
    // cout << cnt << endl;
    string res = (cnt == 4 || cnt == 7) ? "YES" : "NO";
    cout << res;

    return 0;
}