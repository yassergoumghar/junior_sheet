#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, m;
    cin >> n >> m;
    string res[2] = {"#Black&White", "#Color"};
    char possibleChar[6] = {'C', 'M', 'Y', 'W', 'G', 'B'};
    int baseCase = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */

        for (int j = 0; j < m; j++)
        {
            /* code */
            char a, b;
            cin >> a;
            bool aColor = (a == possibleChar[0]) || (a == possibleChar[1]) || (a == possibleChar[2]);
            // bool bColor = (b == possibleChar[0]) || (b == possibleChar[1]) || (b == possibleChar[2]) || (b == possibleChar[4]);

            if (aColor)
            {
                baseCase = 1;
                break;
            }
        }
    }

    cout << res[baseCase];

    return 0;
}
