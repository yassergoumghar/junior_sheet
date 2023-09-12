#include <iostream>
#include <fstream>

#include <set>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    fstream in("cases.txt");
    cin.rdbuf(in.rdbuf());

    return 0;
}
