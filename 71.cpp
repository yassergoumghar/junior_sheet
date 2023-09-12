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
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string currentWord;
        cin >> currentWord;

        if (currentWord.size() > 10)
        {
            int rem = currentWord.size() - 2;
            char firstLetter = currentWord[0];
            char lastLetter = currentWord[currentWord.size() - 1];

            currentWord = firstLetter + to_string(rem) + lastLetter;
        }

        cout << currentWord << '\n';
    }

    return 0;
}
