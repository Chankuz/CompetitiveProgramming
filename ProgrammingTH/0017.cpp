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
    vector<int> distance(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> distance[i];
    }
    sort(distance.begin(), distance.end());
    cout << distance[0] * distance[2];
    return 0;
}