#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    string inp;

    // 3 Didn't use cin because after space it ignores it and stores what's before
    getline(cin, inp);

    set<char> vals;

    for (int i = 0; i < inp.size(); i++)
    {
        if (inp[i] >= 'a' && inp[i] <= 'z')
        {
            vals.insert(inp[i]);
        }
    }

    cout << vals.size();

    return 0;
}
