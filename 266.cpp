#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string line;
    cin >> line;

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        if (line[i] == line[i + 1])
        {

            count++;
        }
    }

    cout << count;

    return 0;
}
