#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    long num;

    while (cin >> num && num != 0)
    {

        long res = sqrt(num);
        if (res * res == num)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}
