#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    string teamA, teamB;
    int points[2] = {0, 0};

    for (int i = 0; i < n; i++)
    {
        /* code */
        string currTeam;
        cin >> currTeam;

        // cout << currTeam << ' ';

        if (i == 0)
        {
            teamA = currTeam;
            points[0] += 1;
            continue;
        }

        if ((currTeam.compare(teamA)) != 0)
        {
            teamB = currTeam;
            points[1] += 1;
            continue;
        }

        int res = currTeam.compare(teamA);

        int idx = (res == 0) ? 0 : 1;
        points[idx] += 1;
    }

    if (points[0] > points[1])
    {
        /* code */
        cout << teamA;
    }
    else
    {
        cout << teamB;
    }

    return 0;
}
