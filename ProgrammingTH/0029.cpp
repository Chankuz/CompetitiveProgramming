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
    double a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << 2;
    }
    else
    {
        cout << ceil(b / a);
    }

    return 0;
}