#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    string new_str = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+')
        {
            continue;
        }
        new_str += str[i];
    }
    sort(new_str.begin(), new_str.end());
    // cout << new_str;
    for (int i = 0; i < new_str.length(); i++)
    {
        cout << new_str[i];
        if (i == new_str.length() - 1)
        {
            continue;
        }
        else
        {
            cout << "+";
        }
    }

    return 0;
}