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
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "2")
            cout << "T\n";
        else if (str[str.size() - 1] % 2 == 0)
            cout << "F\n";
        else if (str[str.size() - 1] % 2 == 1)
            cout << "T\n";
    }

    return 0;
}