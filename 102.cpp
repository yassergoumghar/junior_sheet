#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string s1;
    cin >> s1;

    int count = 0, x = 11;

    if (s1.length() < 2)
    {
        /* code */
        cout << 0;
        return 0;
    }

    while (x >= 10)
    {

        x = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            /* code */
            x += (s1[i] - '0'); // 1 999 => 9 + 9 + 1 => 19
        }

        s1 = to_string(x); // 3 x = 19 => convert to string
        count++;
    }

    cout << count;

    return 0;
}
