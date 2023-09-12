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

    if (n == 0)
    {
        cout << 1;
        return 0;
    }

    int mod = n % 4;

    if (mod == 1)
    {
        cout << 8;
    }

    if (mod == 2)
    {
        cout << 4;
    }

    if (mod == 3)
    {
        cout << 2;
    }

    if (mod == 0)
    {
        cout << 6;
    }

    return 0;
}
