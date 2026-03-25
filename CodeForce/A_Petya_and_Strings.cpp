#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;
    for (char &s : str1)
    {
        s = tolower(s);
    }
    for (char &s : str2)
    {
        s = tolower(s);
    }

    if (str1 == str2)
    {
        cout << 0;
    }
    else if (str1 < str2)
    {
        cout << -1;
    }
    else
        cout << 1;

    return 0;
}