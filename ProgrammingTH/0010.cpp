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
    vector<int> a = {1, 0, 0};
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            swap(a[0], a[1]);
        if (str[i] == 'B')
            swap(a[1], a[2]);
        if (str[i] == 'C')
            swap(a[2], a[0]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 1)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}