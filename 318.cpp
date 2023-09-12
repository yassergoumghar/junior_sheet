#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    long long n, k, ans;
    cin >> n >> k;

    if (n % 2 == 0)
    {

        if (k <= (n / 2))
        {
            ans = k * 2 - 1;
        }
        else
        {
            ans = (k - (n / 2)) * 2;
        }
    }
    else
    {

        if (k <= ((n / 2) + 1))
        {
            ans = k * 2 - 1;
        }
        else
        {
            ans = (k - ((n / 2) + 1)) * 2;
        }
    }

    cout << ans;

    return 0;
}
