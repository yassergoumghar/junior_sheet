#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, p1, p2, p3, t1, t2;

    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    int intervals[n][2];
    int intervalDuration = 0, outp = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> intervals[i][0] >> intervals[i][1];
        intervalDuration += (intervals[i][1] - intervals[i][0]);
        // cout << intervalDuration << ' ';
    }

    int coefficient = 0;

    for (int i = 0; i < (n - 1); i++)
    {
        /* code */
        int currentFinal = intervals[i][1];
        int nextStart = intervals[i + 1][0];
        int diff = nextStart - currentFinal;

        int temp;

        if (diff <= t1)
        {
            /* code */
            temp = (diff * p1);
        }
        else if (diff > t1 && (diff - t1) <= t2)
        {
            temp = (t1 * p1) + (diff - t1) * p2;
        }
        else
        {
            temp = (t1 * p1) + (t2 * p2) + ((diff - t1 - t2) * p3);
        }
        coefficient += temp;
    }

    outp = (intervalDuration * p1) + coefficient;
    cout << '\n';
    cout << outp;

    return 0;
}