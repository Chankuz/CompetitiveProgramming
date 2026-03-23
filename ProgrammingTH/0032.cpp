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
    int n;
    cin >> n;
    vector<int> vn(n);
    int idx_start = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }

    sort(vn.begin(), vn.end());
    if (vn[0] == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (vn[i] != 0)
            {
                swap(vn[0], vn[i]);
                break;
            }
        }
    }
    for (int k : vn)
    {
        cout << k;
    }

    return 0;
}