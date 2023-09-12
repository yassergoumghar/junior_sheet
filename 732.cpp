#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int price;
    cin >> price;

    int r;
    cin >> r;

    int found = 0;
    int pointer = 1;

    while (!found)
    {

        int currentReste = (price * pointer) % 10;
        if ((currentReste == r) || currentReste == 0)
        {
            found = 1;
        }
        else
        {
            pointer++;
        }
    }

    cout << pointer;

    return 0;
}
