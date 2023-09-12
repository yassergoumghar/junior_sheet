#include <iostream>
#include <fstream>
#include <stdlib.h> /* abs */

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string inp;
    cin >> inp;

    int totalMoves = 0;
    int idx = (int)'a';

    for (int i = 0; i < inp.size(); i++)
    {
        /* code */
        int idxArrive = (int)(inp[i]);
        int moves = abs(idx - idxArrive);

        // 3 We chose 13 because it's in the middle
        if (moves < 13)
        {
            totalMoves += moves;
        }
        else
        {
            // 1 we did 26 because we should substract 26 from moves to go the other way => Draw a shema for better understanding
            totalMoves += abs(26 - moves);
        }

        idx = idxArrive;
    }

    cout << totalMoves;

    return 0;
}
