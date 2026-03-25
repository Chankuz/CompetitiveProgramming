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
    bool isCan = false;
    cin >> n;
    vector<int> vn(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (vn[i] > 0)
        {
            isCan = true;
            break;
        }
    }

    if (!isCan)
    {
        cout << "Empty sequence";
        return 0;
    }

    int first, last, mx = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        for (int j = i; j < n; j++)
        {
            res = res + vn[j];
            mx = max(mx, res);
            if (res == mx)
            {
                first = i;
                last = j;
            }
        }
    }
    for (int i = first; i <= last; i++)
    {
        cout << vn[i] << " ";
    }
    cout << endl;
    cout << mx;

    return 0;
}