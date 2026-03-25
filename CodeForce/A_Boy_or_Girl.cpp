#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<char> seen;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        seen.insert(str[i]);
    }
    if (seen.size() % 2 != 0)
        cout << "IGNORE HIM!";
    else
    {
        cout << "CHAT WITH HER!";
    }

    // odd => male

    return 0;
}