#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    int outp[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        int currI;
        cin >> currI;
        outp[currI - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << outp[i] << ' ';
    }

    return 0;
}
