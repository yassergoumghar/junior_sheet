#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdio>
#include <bits/stdc++.h>

// #include <LinkedList.h>

using namespace std;

void bitPermutation(string s, int n)
{

    for (int mask = 0; mask < pow(2, n); mask++)
    {
        int currSum = 0;
        /* code */
        for (int j = 0; j < n; j++)
        {
            (mask & (1 << j)) ? currSum++ : currSum--;
        }

        cout << currSum << endl;
    }
}

// int recursivePermutation(int n)
// {
//     if (n == -1)
//     {
//         return 0;
//     }

//     cout << recursivePermutation(n - 1) + 1 << endl;
//     cout << recursivePermutation(n - 1) - 1 << endl;
// }

int main()
{

    // bitPermutation("+-", 2);
    // recursivePermutation(2);

    // 1 Read from cases.txt file my input
    fstream in("cases.txt");
    cin.rdbuf(in.rdbuf());

    string s1, s2;
    cin >> s1 >> s2;

    int corrAns = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        /* code */
        s1[i] == '+' ? corrAns++ : corrAns--;
    }

    int disturbed = 0;
    int correctDisturbed = 0;

    for (int i = 0; i < s2.size(); i++)
    {
        /* code */
        if (s2[i] == '?')
        {
            /* code */
            disturbed++;
        }
        else
            s2[i] == '+' ? correctDisturbed++ : correctDisturbed--;
    }

    string randPos;
    char charact[2] = {'+', '-'};

    for (int i = 0; i < disturbed; i++)
    {
        /* code */
        randPos += charact[i % 2];
    }

    // if (randPos.size())
    // {
    int size = pow(2, disturbed);
    int res[size];

    for (int mask = 0; mask < pow(2, disturbed); mask++)
    {
        int currSum = 0;
        /* code */
        for (int j = 0; j < disturbed; j++)
        {
            (mask & (1 << j)) ? currSum++ : currSum--;
        }

        // res[currSum]++;
        cout << currSum << endl;
    }
    // int times = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     if (corrAns == res[i])
    //         times++;
    // }

    // cout << times << endl;
    // printf("%.9f", (double)times / size);
    // }

    return 0;
}
