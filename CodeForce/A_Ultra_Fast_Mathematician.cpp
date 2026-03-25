#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2, new_str = "";
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        new_str += (str1[i] == str2[i]) ? "0" : "1";
    }
    cout << new_str;

    return 0;
}