#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    long long x;
    cin >> n >> x;

    int stressedKids = 0;

    // 3 Skip to the next line
    cin.clear();
    cin.ignore(10000, '\n');

    for (int i = 0; i < n; i++)
    {
        /* code */
        string str;
        getline(cin, str);
        bool add = int(str[0]) == int('+');

        // 3 Get substring from num to end '+  324232'
        string str2 = str.substr(2, str.size());
        long long intNum = stoi(str2);

        if (add)
        {
            x += intNum;
        }
        else
        {
            if (x >= intNum)
            {
                x -= intNum;
            }
            else
            {
                stressedKids++;
            }
        }
    }

    cout << x << ' ' << stressedKids;

    return 0;
}
