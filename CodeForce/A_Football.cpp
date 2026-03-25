#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int cnt = 1, mx = -1;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            cnt++;
            mx = max(mx, cnt);
            if (mx + 1 >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            cnt = 0;
        }
    }

    cout << "NO";
    return 0;
}