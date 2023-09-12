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

    string baseS = "ROYGBIV";
    string firstStr = "G";
    string secondStr = "GB";
    string thirdStr = "GBI";
    string fourthStr = "GBIV";

    cout << baseS;
    int mySize = n - 7;

    while (mySize > 0)
    {

        if (mySize == 1)
        {
            /* code */
            cout << firstStr;
            mySize -= 1;
        }
        else if (mySize == 2)
        {
            cout << secondStr;
            mySize -= 2;
        }
        else if (mySize == 3)
        {
            cout << thirdStr;
            mySize -= 3;
        }
        else
        {
            cout << fourthStr;
            mySize -= 4;
        }
    }

    return 0;
}
