#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string s1, s2;
    cin >> s1 >> s2;

    if (s1 != s2)
    {

        cout << max(s1.size(), s2.size());
    }
    else
    {
        cout << "-1";
    }

    return 0;
}
