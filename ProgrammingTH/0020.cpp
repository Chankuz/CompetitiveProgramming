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

    int a, b, c, d, accu;
    int mx = -1, idx = -1;
    int hsh[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a >> b >> c >> d;
        accu = a + b + c + d;
        if (mx < accu)
        {
            mx = accu;
            idx = i;
        }
    }

    cout << (idx + 1) << " " << mx;

    // for (int i = 0; i < 5; i++)
    // {
    //     if (hsh[i] == mx)
    //     {
    //         cout << i + 1 << " " << mx;
    //         return 0;
    //     }
    // }

    return 0;
}