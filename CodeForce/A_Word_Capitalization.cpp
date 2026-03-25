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
    cin >> str;
    if (islower(str[0]))
    {
        str[0] = toupper(str[0]);
        for (char s : str)
        {
            cout << s;
        }
    }
    else
    {
        cout << str;
    }

    return 0;
}