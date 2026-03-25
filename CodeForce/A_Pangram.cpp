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
    bool isTrue = true;
    cin >> n;
    string str;
    cin >> str;
    int arr[26] = {0};
    for (char &s : str)
    {
        s = tolower(s);
    }

    for (int i = 0; i < n; i++)
    {
        arr[str[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] < 1)
        {
            isTrue = false;
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}