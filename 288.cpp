#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    // To store index of next unique element
    int j = 0;

    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];

    return j;
}

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int colors[4];

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cin >> colors[i];
    }

    sort(colors, colors + 4);

    // int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(colors) / sizeof(colors[0]);

    // removeDuplicates() returns new size of
    // array.
    n = removeDuplicates(colors, n);

    // Print updated array

    cout << 4 - n;

    return 0;
}
