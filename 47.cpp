#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int a = 0;
    int b = 0;
    int c = 0;

    char nums[3];

    for (int i = 0; i < 3; i++)
    {
        /* code */
        string val;
        cin >> val; // 3 e.g: A>B

        // 1 Convert string to array of char
        char *nums = &val[0];

        if (nums[1] == '>')
        {
            /* code */
            if (nums[0] == 'A')
            {
                /* code */
                a++;
            }
            if (nums[0] == 'B')
            {
                /* code */

                b++;
            }
            if (nums[0] == 'C')
            {
                /* code */
                c++;
            }
        }
        else
        {
            if (nums[2] == 'A')
            {
                /* code */
                a++;
            }
            if (nums[2] == 'B')
            {
                /* code */

                b++;
            }
            if (nums[2] == 'C')
            {
                /* code */

                c++;
            }
        }
    }

    if (a == b || a == c || b == c)
    {
        /* code */
        cout << "Impossible";
    }
    else
    {

        if (a > b && a > c) // 3 a is first
        {
            if (b > c) // 3 b is second
            {
                /* code */
                cout << "CBA";
            }
            else
            {
                cout << "BCA";
            }
        }
        else if (b > a && b > c)
        {
            if (a > c) // 3 b is second
            {
                /* code */
                cout << "CAB";
            }
            else
            {
                cout << "ACB";
            }
        }
        else
        {
            if (a > b) // 3 b is second
            {
                /* code */
                cout << "BAC";
            }
            else
            {
                cout << "ABC";
            }
        }
    }

    return 0;
}
