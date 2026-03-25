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
    int arr[8] = {4, 7, 47, 74, 477, 744, 444, 777};
    for (int l : arr)
    {
        if (n % l == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

    return 0;
}