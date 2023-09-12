#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    string t;
    cin >> t;

    int position = 0;
    int lastIdxOfT = 0;

    for (int i = 0; i < t.length(); i++)
    {
        /* code */
        if (s[position] == t[i])
        {
            /* code */
            position++;
        }
    }

    cout << position + 1;

    return 0;
}
