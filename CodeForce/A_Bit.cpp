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
        string str;
        cin >> str;
        if (str == "X++" || str == "++X")
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    cout << cnt;

    return 0;
}