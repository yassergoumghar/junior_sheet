#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    int a[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);
    int mySum = 0;
    int coins = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        /* code */
        // 3 Condition asked
        if (mySum > (sum / 2))
            break;

        mySum += a[i];
        coins++;
    }

    cout << coins;

    return 0;
}
