#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string x;
    cin >> x;

    cout << x;

    for (int i = x.size() - 1; i >= 0; i--)
    {
        cout << x[i];
    }

    return 0;
}
