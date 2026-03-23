#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

int n, m;
bool forbidden[9], used[9];
int perm[9];
void recur(int pos)
{
    if (pos == n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", perm[i]);
            if (i < n - 1)
                printf(" ");
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (used[i])
            continue;
        if (pos == 0 && forbidden[i])
            continue;

        used[i] = true;
        perm[pos] = i;
        recur(pos + 1);
        used[i] = false;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        forbidden[x] = true;
    }
    recur(0);

    return 0;
}