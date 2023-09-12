#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    char dir;
    cin >> dir;

    int dirX;
    dir == 'R' ? dirX = -1 : dirX = 1;

    string inp;
    cin >> inp;

    for (int i = 0; i < inp.size(); i++)
    {
        /* code */
        char currChar = inp[i];
        int wrongIdx = keyboard.find(currChar);
        cout << keyboard[wrongIdx + dirX];
    }

    return 0;
}
