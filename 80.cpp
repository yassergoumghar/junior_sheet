#include <iostream>
#include <fstream>

using namespace std;

/* Function to check number is prime or not */
bool checkPrimeNumber(int n)
{
    bool isPrime = true;

    // 3) 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, m;
    cin >> n >> m;

    bool found = 0;
    // n++;

    while (!found)
    {
        /* code */
        n++;
        found = checkPrimeNumber(n);
    }

    string outp[2] = {"NO", "YES"};

    int idx = n == m;
    cout << outp[idx];

    return 0;
}
