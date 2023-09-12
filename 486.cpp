#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    long long n;
    cin >> n;

    long long coef;

    if (n % 2 != 0)
    {
        coef = -(n + 1);
    }
    else
    {
        coef = n;
    }

    long long num = coef / 2;

    cout << num;

    return 0;
}
