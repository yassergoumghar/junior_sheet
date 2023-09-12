#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, k;
    int kGood = 0;

    cin >> n >> k;

    string original = "0123456789";

    for (int i = 0; i < n; i++)
    {
        int times = 0;

        /* code */
        string currStr;
        cin >> currStr;

        // cout << currStr << ' ';

        for (int i = 0; i <= k; i++)
        {
            /* code */
            int idx = currStr.find(original[i]);
            // cout << idx << ' ';
            if (idx != -1)
            {
                /* code */
                times++;
            }
        }

        // cout << "times " << times << endl;

        if (times == k + 1)
        {
            /* code */
            kGood++;
        }
    }

    cout << kGood;

    return 0;
}
