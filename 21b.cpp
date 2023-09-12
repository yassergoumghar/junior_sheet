#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    if ((a1 * b2 - a2 * b1) == 0)
    {
        /* code */
        cout << "-1";
        return 0;
    }
    else
    {
        cout << "1";
    }

    return 0;
}
