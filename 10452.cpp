#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string requiredPath = "IEHOVA#";
char coordinates[8][8];

int directionX[3] = {-1, 0, 1};
int directionY[3] = {0, -1, 0};
string result[3] = {"left", "forth", "right"};
int lignes, colonnes;

vector<string> answer;

void dfs(int i, int j, int idx)
{

    // cout << i << ' ' << j << '\n';

    // 4 Recursion Base case => Finish
    if (idx == requiredPath.size())
        return;

    for (int k = 0; k < 3; k++)
    {

        int moveX = i + directionX[k];
        int moveY = j + directionY[k];

        // cout << moveX << ' ' << moveY << '\n';

        bool correctMove = (coordinates[moveY][moveX] == requiredPath[idx]);
        if (correctMove)
        {
            answer.push_back(result[k]);

            dfs(moveX, moveY, idx + 1);
        }
    }
}

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int times;
    cin >> times;

    while (times > 0)
    {
        /* code */
        // 3 vector answer becomes empty for previous answers
        answer.clear();

        int starting[2];
        /* code */
        cin >> lignes >> colonnes;
        for (int i = 0; i < lignes; i++)
        {
            /* code */
            for (int j = 0; j < colonnes; j++)
            {
                /* code */
                cin >> coordinates[i][j];

                if (coordinates[i][j] == '@')
                {
                    starting[0] = i;
                    starting[1] = j;
                }
            }
        }

        // 3 Deapth First search
        dfs(starting[1], starting[0], 0);

        cout << answer[0] << ' ';
        for (int i = 1; i < answer.size(); i++)
        {
            /* code */
            cout << answer[i] << ' ';
        }
        cout << '\n';

        times--;
    }

    return 0;
}
