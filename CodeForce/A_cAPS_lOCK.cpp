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
    int n = str.length();
    bool isUpperAll = true;
    for (int i = 1; i < n; i++)
    {
        if (islower(str[i]))
        {
            isUpperAll = false;
            break;
        }
    }

    if (isupper(str[0]) && isUpperAll)
    {
        for (char &s : str)
        {
            cout << (char)tolower(s);
        }
    }
    else if (islower(str[0]) && isUpperAll)
    {
        cout << (char)toupper(str[0]);
        for (int i = 1; i < n; i++)
        {
            cout << (char)tolower(str[i]);
        }
    }
    else
    {
        cout << str;
    }

    return 0;
}