#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;

struct Team
{
    string Name;
    int point;
    int goal;
    int goalDif;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<Team> teams(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> teams[i].Name;
    }

    int score[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> score[i][j];
            teams[i].goal += score[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int lose_score = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (score[i][j] > score[j][i])
            {
                teams[i].point += 3;
            }
            else if (score[i][j] == score[j][i])
            {
                teams[i].point++;
            }
        }
        teams[i].goalDif = teams[i].point - lose_score;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            bool need_swap = false;
            if (teams[j].point > teams[i].point)
            {
                need_swap = true;
            }
            else if (teams[j].point == teams[i].point && teams[j].goalDif > teams[i].goalDif)
            {
                need_swap = true;
            }
            else if (teams[j].point == teams[i].point && teams[j].goalDif == teams[i].goalDif && teams[j].goal > teams[i].goal)
            {
                need_swap = true;
            }
            if (need_swap)
            {
                swap(teams[i], teams[j]);
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << teams[i].Name << " " << teams[i].point << endl;
    }

    return 0;
}