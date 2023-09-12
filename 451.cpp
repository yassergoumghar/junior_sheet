#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
        b[i] = a[i];
    }

    int l = -1, r = -1;

    sort(b, b + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }

    if (l == -1)
    {
        cout << "yes\n";
        cout << "1 1";
        return 0;
    }

    // 3 Swap the array from right to left idx;
    int temp[n];
    for (int i = l, j = r; i <= r; i++, j--)
    {
        /* code */
        temp[i] = a[j];
    }

    for (int i = l; i <= r; i++)
    {
        /* code */
        a[i] = temp[i];
    }

    // 4 Check if at least one element is different in orriginal array "a" than in sorted arr "b"
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes\n";
    cout << l + 1 << ' ' << r + 1;

    return 0;
}
