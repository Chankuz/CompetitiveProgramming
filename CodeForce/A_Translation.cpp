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
    if (str1.length() != str2.length())
    {
        cout << "NO";
        return 0;
    }
    int l = 0, r = str2.length() - 1;
    while (l != str1.length() && r != str2.length())
    {
        if (str1[l] != str2[r])
        {
            cout << "NO";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES";
    return 0;
}