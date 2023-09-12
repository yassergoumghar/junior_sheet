#include <iostream>
#include <fstream>
#include <algorithm> // std::min

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int res = (t + d) / t;

    if (res * k < n)
    {
        /* code */
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
