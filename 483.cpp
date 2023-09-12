#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool checkIfNumberIsPrime(long long n)
{

    bool isPrime = true;

    if (n == 1 || n == 0)
    {
        /* code */
        // 3) 1 & 0 are not Prime
        return false;
    }

    for (long long i = 2; i < sqrt(n); i++)
    {
        /* code */
        if (n % i == 0)
        {
            /* code */
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main()
{

    // 1 Read from cases.txt file my input
    fstream in("cases.txt");
    cin.rdbuf(in.rdbuf());

    long long a, c;
    cin >> a >> c;

    int b = -1;

    for (long long j = a + 1; j < c; j++)
    {
        /* code */
        bool currNumIsPrime = checkIfNumberIsPrime(j);
        if (currNumIsPrime)
        {
            /* code */
            b = j;
            break;
        }
    }

    if (b == -1)
    {
        /* code */
        cout << b;
    }
    else
    {
        cout << a << ' ' << b << ' ' << c;
    }

    return 0;
}
