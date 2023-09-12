#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    int crimesUntreated = 0;
    int freePolice = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        int currentInt;
        cin >> currentInt;

        if (currentInt != -1)
        {
            /* code */
            freePolice += currentInt;
        }
        else
        {

            if (freePolice > 0)
            {
                /* code */
                freePolice -= 1;
            }
            else
            {
                crimesUntreated++;
            }
        }
    }

    cout << crimesUntreated;

    return 0;
}
