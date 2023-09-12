#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    bool visited[((int)'z') + 1];

    for (int i = (int)'a'; i <= (int)'z'; i++)
    {
        /* code */
        visited[i] = 0;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        /* code */
        char currentChar;
        cin >> currentChar;
        currentChar = tolower(currentChar);
        visited[(int)currentChar] = 1;
    }

    int res = 1;
    for (int i = (int)'a'; i <= (int)'z'; i++)
    {
        /* code */
        if (visited[i] == 0)
        {
            res = 0;
            // cout << visited[i] << '\n';
            break;
        }
    }

    res == 1 ? cout << "YES" : cout << "NO";

    return 0;
}
