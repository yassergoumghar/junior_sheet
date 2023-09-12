#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int inc[5] = {4, 6, 8, 12, 20};

    int ans = 0;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        string currInp;
        cin >> currInp;

        if (currInp.compare("Tetrahedron") == 0)
        {
            /* code */
            ans += 4;
        }
        if (currInp.compare("Cube") == 0)
        {
            /* code */
            ans += 6;
        }
        if (currInp.compare("Octahedron") == 0)
        {
            /* code */
            ans += 8;
        }
        if (currInp.compare("Dodecahedron") == 0)
        {
            /* code */
            ans += 12;
        }
        if (currInp.compare("Icosahedron") == 0)
        {
            /* code */
            ans += 20;
        }
    }

    cout << ans;

    return 0;
}
