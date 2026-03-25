#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string str = "";
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            str += "I love that ";
        }
        else
        {
            str += "I hate that ";
        }
    }
    for (int i = 0; i < str.length() - 5; i++)
    {
        cout << str[i];
    }
    cout << "it";

    return 0;
}