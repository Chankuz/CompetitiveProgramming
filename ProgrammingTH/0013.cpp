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

    vector<int> suspense_dwarves(9);
    int target = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> suspense_dwarves[i];
        target += suspense_dwarves[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (suspense_dwarves[i] + suspense_dwarves[j] == target - 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (suspense_dwarves[k] == suspense_dwarves[i] || suspense_dwarves[k] == suspense_dwarves[j])
                    {
                        continue;
                    }
                    cout << suspense_dwarves[k] << endl;
                }
                return 0;
            }
        }
    }

    return 0;
}