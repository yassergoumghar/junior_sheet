#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i] >> b[i];

        if (a[i] != b[i])
        {
            cout << "rated";
            return 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
        /* code */
        if (a[i] > a[i - 1])
        {
            cout << "unrated";
            return 0;
        }
    }

    cout << "maybe";

    return 0;
}
