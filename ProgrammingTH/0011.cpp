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
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a(10);
    vector<bool> seen(42, true);
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        seen[a[i] % 42] = false;
    }

    for (int i = 0; i < 42; i++)
    {
        if (seen[i])
        {
            cnt++;
        }
    }
    cout << 42 - cnt;

    return 0;
}