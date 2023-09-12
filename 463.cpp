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

    int energy, dollars = 0;

    int heights[n];

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    // int lastStep = heights[0];
    dollars = heights[0];

    for (int i = 1; i < n - 1; i++)
    {
        /* code */
        if (heights[i] < heights[i + 1])
        {
            /* code */
            if (heights[i + 1] - heights[i] > energy)
            {
                /* code */
                dollars += heights[i + 1] - heights[i];
                energy = 0;
            }
            else if (heights[i + 1] - heights[i] <= energy)
            {
                /* code */
                energy -= heights[i + 1] - heights[i];
            }
        }
        else if (heights[i] > heights[i + 1])
        {
            energy += heights[i] - heights[i + 1];
        }
    }

    cout << dollars;

    return 0;
}
