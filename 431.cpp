#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int coeff[4];

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cin >> coeff[i];
    }

    string s;
    cin >> s;

    int calories = 0;

    for (int i = 0; i < s.size(); i++)
    {
        // 3 Subtracting 48 will produce desired results => Convert from char to int
        // cout << int(ch) - 48 << "\n";

        calories = calories + coeff[(int(s[i]) - 48) - 1];
    }

    cout << calories;

    return 0;
}
