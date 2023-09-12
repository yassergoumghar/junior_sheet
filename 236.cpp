#include <iostream>

using namespace std;

int main()
{

    // 1 Remove duplicates => Get size => Check if odd or even;
    string name;
    cin >> name;

    int size = 0;

    for (int i = 0; i < name.size(); i++)
    {
        bool repeat = 0;
        /* code */
        for (int j = i + 1; j < name.size(); j++)
        {
            /* code */
            if (name[i] == name[j])
                repeat = 1;
        }

        if (!repeat)
            size++;
    }

    if ((size % 2) == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
