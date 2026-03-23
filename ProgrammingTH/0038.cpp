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
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    // cout << endl;

    for (string ss : s)
    {
        cout << ss << endl;
    }

    return 0;
}