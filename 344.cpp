#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int groups = 0;

    string lastMagnet;

    for (int i = 0; i < n; i++)
    {
        /* code */
        string currentMagnet;
        cin >> currentMagnet;

        if (i == 0)
        {
            groups++;
            lastMagnet = currentMagnet;
            continue;
        }

        if (lastMagnet[1] == currentMagnet[0])
        {

            groups++;
        }

        lastMagnet = currentMagnet;
    }

    cout << groups;

    return 0;
}
