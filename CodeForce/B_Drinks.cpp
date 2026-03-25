#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    long double sum = 0;
    cin >> n;
    temp = n;
    while (n--)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12) << (long double)sum / temp;

    return 0;
}