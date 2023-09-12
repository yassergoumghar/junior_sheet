#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    fstream in("cases.txt");
    cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    int firstTop;
    cin >> firstTop;

    return 0;
}
