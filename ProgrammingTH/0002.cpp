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
    int n;
    int min = INT_MAX, max = INT_MIN;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
        if (x < min)
        {
            min = x;
        }
    }

    cout << min << endl;
    cout << max;
    return 0;
}