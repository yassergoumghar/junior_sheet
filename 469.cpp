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

    bool levels[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        levels[i] = 0;
    }

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        /* code */
        int currP;
        cin >> currP;
        --currP;
        levels[currP] = 1;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        /* code */
        int currQ;
        cin >> currQ;
        --currQ;
        levels[currQ] = 1;
    }

    bool passedAll = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (levels[i] == 0)
        {
            passedAll = 0;
            break;
        }
    }

    passedAll == 1 ? cout << "I become the guy." : cout << "Oh, my keyboard!";

    return 0;
}
