#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size();

    return 0;
}