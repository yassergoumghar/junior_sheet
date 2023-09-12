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

    int rows[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> rows[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        /* code */
        int x, y;
        cin >> x >> y;

        int rightBirds = abs(rows[x - 1] - y);
        int leftBirds = abs(rows[x - 1] - rightBirds - 1);

        if (x == 1)
            leftBirds = 0;
        if (x == n)
            rightBirds = 0;

        rows[x - 2] += leftBirds;
        rows[x] += rightBirds;
        rows[x - 1] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << rows[i] << '\n';
    }

    return 0;
}
