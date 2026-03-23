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
    string str;
    cin >> str;
    int n = str.length();
    bool is_upper = false, is_lower = false;
    for (int i = 0; i < n; i++)
    {
        if (islower(str[i]))
        {
            is_lower = true;
        }
        if (isupper(str[i]))
        {
            is_upper = true;
        }
    }

    if (is_lower && is_upper)
        cout << "Mix";
    else if (is_upper)
    {
        cout << "All Capital Letter";
    }
    else if (is_lower)
    {
        cout << "All Small Letter";
    }

    return 0;
}