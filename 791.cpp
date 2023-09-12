#include <iostream>
using namespace std;

int getYears(int a, int b)
{

    int years = 0;

    while (a <= b)
    {

        a *= 3;
        b *= 2;

        years++;
    }

    return years;
}

int main()
{

    // 1 Limak => A
    // 1 Bob => B

    int a, b;

    cin >> a >> b;

    int years = getYears(a, b);

    cout << years << endl;

    return 0;
}
