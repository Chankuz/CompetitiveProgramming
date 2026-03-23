#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int recur(int a)
{
    if (a == 1)
    {
        return 0;
    }
    return recur(a / 2) + 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(3);
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
        sum += recur(v[i]);
    }
    cout << sum;

    return 0;
}