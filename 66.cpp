#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    fstream in("cases.txt");
    cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    int sizes[n];
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> sizes[i];
    }

    for (int i = 0; i < n; i++)
    {
        int counter = 1;
        /* code */
        for (int j = i - 1; j > 0; j--)
        {
            /* code */
            if (sizes[j] >= sizes[j - 1])
            {
                /* code */
                counter++;
            }
            else
            {
                break;
            }
        }

        for (int k = i + 1; k < n; k++)
        {
            /* code */
            if (sizes[k] >= sizes[k + 1])
            {
                /* code */
                counter++;
            }
            else
            {
                break;
            }
        }

        cout << sizes[i] << ' ' << counter << '\n';

        if (counter > res)
            res = counter;
    }

    cout << res;

    return 0;
}
