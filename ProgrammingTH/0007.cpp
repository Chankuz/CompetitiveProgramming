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

    double r;
    cin >> r;
    cout << fixed << setprecision(6) << M_PI * r * r << endl;
    cout << fixed << setprecision(6) << 2 * r * r;

    return 0;
}