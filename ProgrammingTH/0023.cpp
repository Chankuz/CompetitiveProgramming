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

    int d, m;
    cin >> d >> m;
    int sum = d;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Wednesday", "Thursday",
                      "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    for (int i = 0; i < m - 1; i++)
    {
        sum += month[i];
    }
    cout << days[sum % 7];

    return 0;
}