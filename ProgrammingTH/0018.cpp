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

    int a, b;
    cin >> a >> b;
    int cn = 0;
    vector<int> seen(a + 1, false);
    for (int i = 2; i <= a; i++)
    {
        for (int j = i; j <= a; j += i)
        {
            if (!seen[j])
            {
                seen[j] = true;
                cn++;
                if (cn == b)
                {
                    cout << j;
                }
            }
        }
    }
    // cout << vd[b - 1];
    // for (int k : seen)
    // {
    //     cout << k << " ";
    // }
    return 0;
}