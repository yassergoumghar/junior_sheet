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

    int stewards[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> stewards[i];
    }

    sort(stewards, stewards + n);

    int times = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (stewards[i] > stewards[0] && stewards[i] < stewards[n - 1])
            times++;
    }

    cout << times;

    return 0;
}
