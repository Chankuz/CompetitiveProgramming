#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

string convert_word(string str)
{
    for (char &s : str)
    {
        s = tolower(s);
    }

    return (str == "yes") ? "YES" : "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        string code;
        cin >> code;
        cout << convert_word(code) << endl;
    }

    return 0;
}