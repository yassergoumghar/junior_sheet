#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string value;
    cin >> value;

    int flag = 0;
    for (int i = 0; i < value.size(); i++)
    {
        if (value[i] == 'W' && value[i + 1] == 'U' && value[i + 2] == 'B')
        {
            i += 2;
            if (flag)
            {
                cout << " ";
            }
            flag = 0;
        }
        else
        {
            flag = 1;
            cout << value[i];
        }
    }

    return 0;
}
