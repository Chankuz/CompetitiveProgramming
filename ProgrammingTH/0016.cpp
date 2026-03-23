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

    string Adrian = "ABC", Bruno = "BABC", Goran = "CCAABB";
    int Adrian_score = 0, Bruno_score = 0, Goran_score = 0;

    int prob;
    cin >> prob;
    string rand;
    cin >> rand;
    for (int i = 0; i < prob; i++)
    {
        if (rand[i] == Adrian[i % 3])
            Adrian_score += 1;
        if (rand[i] == Bruno[i % 4])
            Bruno_score += 1;
        if (rand[i] == Goran[i % 6])
            Goran_score += 1;
    }

    int mx = max({Adrian_score, Bruno_score, Goran_score});
    cout << mx << endl;
    if (mx == Adrian_score)
        cout << "Adrian" << endl;
    if (mx == Bruno_score)
        cout << "Bruno" << endl;
    if (mx == Goran_score)
        cout << "Goran" << endl;
    return 0;
}