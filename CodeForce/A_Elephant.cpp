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
    if (n <= 5)
        cout << 1;
    else if (n % 5 == 0)
    {
        cout << n / 5;
    }
    else
    {
        cout << n / 5 + 1;
    }

    return 0;
}