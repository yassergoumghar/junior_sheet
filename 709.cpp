#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, b, d;
    cin >> n >> b >> d;

    int totalSize = 0;
    int waste = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int a;
        cin >> a;

        if (a > b)
            continue;

        totalSize += a;
        if (totalSize > d)
        {
            waste += 1;
            totalSize = 0;
        }
    }

    cout << waste;

    return 0;
}
