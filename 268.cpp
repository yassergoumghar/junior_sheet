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

    int teams[n][2];

    for (int i = 0; i < n; i++)
    {
        cin >> teams[i][0];
        cin >> teams[i][1];
    }

    int currentHome = 0;

    int result = 0;

    while (currentHome < n)
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (teams[currentHome][0] == teams[i][1])
            {
                /* code */
                result++;
            }
        }
        currentHome++;
    }

    cout << result;

    return 0;
}
