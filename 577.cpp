#include <iostream>
#include <fstream>
#include <stdlib.h> /* abs */

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        /* code */

        int max1 = abs(x[i] - x[0]);
        int max2 = abs(x[i] - x[n - 1]);
        int maxDist = max1 > max2 ? max1 : max2;

        int minDist;

        if (i == 0)
        {
            minDist = abs(x[i] - x[i + 1]);
        }
        else if (i == (n - 1))
        {
            minDist = abs(x[i] - x[i - 1]);
        }
        else
        {
            int min1 = abs(x[i] - x[i - 1]);
            int min2 = abs(x[i] - x[i + 1]);
            minDist = min1 < min2 ? min1 : min2;
        }

        cout << minDist << " " << maxDist << '\n';
    }

    return 0;
}
