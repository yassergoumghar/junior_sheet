#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    long long n, m, a;
    cin >> n >> m >> a;

    long long x = n / a;
    if (n % a != 0)
        x++;

    long long y = m / a;
    if (m % a != 0)
        y++;

    long long ans = x * y;
    cout << ans;

    return 0;
}
