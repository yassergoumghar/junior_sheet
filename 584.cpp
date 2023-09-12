#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10)
    {
        cout << "-1";
    }
    else
    {
        cout << t;
        int add = t < 10 ? (n - 1) : n - 2;
        for (int i = 0; i < add; i++)
        {
            /* code */
            cout << 0;
        }
    }

    return 0;
}
