#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    int three = 0, eleven = 0;
    for (int i = 0; i < n.length(); i++)
    {
        three = ((three * 10) + (n[i] - '0')) % 3;
        eleven = ((eleven * 10) + (n[i] - '0')) % 11;
    }

    cout << three << " " << eleven;
    return 0;
}