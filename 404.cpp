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

    string table[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        string inp;
        cin >> inp;
        table[i] = inp;
    }

    int left = 0, right = n - 1;

    bool outp = 1;

    int diagChar = (int)table[0][0];
    int nonDiagChar = (int)table[0][1];

    outp = diagChar != nonDiagChar;

    while ((left < n) && (right >= 0) && outp)
    {

        if (left != right)
        {
            /* code */
            int leftChar = (int)table[left][left];
            int rightChar = (int)table[left][right];
            // bool temp = leftChar == diagChar;
            outp = (leftChar == diagChar) && (rightChar == diagChar);
        }
        else
        {
            // 1 If left == right
            int cuurrChar = (int)table[left][left];
            outp = cuurrChar == diagChar;
        }

        if (outp)
        {
            /* code */

            for (int i = 0; i < n; i++)
            {
                /* code */
                if ((i != left) && (i != right))
                {
                    /* code */
                    int currChar = (int)table[left][i];
                    outp = nonDiagChar == currChar;
                    if (!outp)
                    {
                        /* code */
                        break;
                    }
                }
            }
        }

        left++;
        right--;
    }

    string finalOut[2] = {"NO", "YES"};

    cout << finalOut[outp];

    return 0;
}
