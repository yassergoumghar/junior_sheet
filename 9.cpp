#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int y, w;
    cin >> y >> w;

    int maxim = y > w ? y : w;

    int diff = 6 - (maxim - 1);

    int Num1 = diff;
    int Num2 = 6;

    int denom;
    denom = findGCD(Num1, Num2);
    Num1 /= denom;
    Num2 /= denom;

    cout << Num1 << "/" << Num2;

    return 0;
}
