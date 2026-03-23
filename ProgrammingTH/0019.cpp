#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <climits>
#include <iomanip>
#define ll long long
#define endl "\n"
#define MAXN 10
const int MOD = 1e9 + 7;
using namespace std;

int n, s[MAXN], b[MAXN], best = 100000000;
int diff(int x, int y)
{
    return x < y ? y - x : x - y;
}
void recur(int i, int sourness, int bitterness)
{
    if (i == n)
    {
        if (bitterness > 0 && diff(sourness, bitterness) < best)
        {
            best = diff(sourness, bitterness);
        }
    }
    else
    {
        recur(i + 1, sourness, bitterness);
        recur(i + 1, sourness * s[i], bitterness + b[i]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> b[i];
    }

    recur(0, 1, 0);
    cout << best;

    return 0;
}