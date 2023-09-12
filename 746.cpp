#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    string x;
    cin >> x;

    string res;

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            /* code */
            res.insert(0, 1, x[i]);
            continue;
        }

        /* code */
        if (i % 2 == 0)
        {
            /* code */
            res += x[i];
        }
        else
        {
            res.insert(0, 1, x[i]);
        }
    }

    if (n % 2 == 0)
    {
        /* code */
        reverse(res.begin(), res.end());
    }
    cout << res;

    return 0;
}
