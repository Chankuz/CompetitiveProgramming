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
    for (char &s : str)
    {
        s = tolower(s);
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y')
        {
            continue;
        }
        cout << "." << s;
    }

    return 0;
}