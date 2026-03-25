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
    int lower_cnt = 0, upper_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (islower(str[i]))
            lower_cnt++;
        if (isupper(str[i]))
            upper_cnt++;
    }
    if (lower_cnt >= upper_cnt)
    {
        for (char &s : str)
        {
            s = tolower(s);
        }
        cout << str;
    }
    else
    {
        for (char &s : str)
        {
            s = toupper(s);
        }
        cout << str;
    }

    return 0;
}