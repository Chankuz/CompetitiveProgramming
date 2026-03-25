#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count_A = 0, count_B = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            count_A++;
        else
            count_B++;
    }
    if (count_A == count_B)
    {
        cout << "Friendship";
    }
    else if (count_A > count_B)
    {
        cout << "Anton";
    }
    else if (count_B > count_A)
    {
        cout << "Danik";
    }

    return 0;
}