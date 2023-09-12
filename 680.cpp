#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 1 Read from cases.txt file my input
    // fstream in("cases.txt");
    // cin.rdbuf(in.rdbuf());

    int n, a, counter = 0;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    a--;

    int leftIdx = a - 1;
    int rightIdx = a + 1;

    int res;

    arr[a] == 1 ? res = 1 : res = 0;

    while (leftIdx >= 0 || rightIdx <= n)
    {

        if ((leftIdx >= 0 && rightIdx <= n))
        {
            if ((arr[leftIdx] == 1 && arr[rightIdx] == 1))
            {
                /* code */
                // cout << arr[leftIdx] << ' ' << arr[rightIdx] << '\n';

                res += 2;
            }

            leftIdx--;
            rightIdx++;
        }
        else
        {
            if (leftIdx >= 0)
            {
                if (arr[leftIdx] == 1)
                {
                    // cout << arr[leftIdx] << '\n';

                    res++;
                }
                leftIdx--;
            }
            if ((rightIdx <= n))
            {
                if ((arr[rightIdx] == 1))
                {
                    /* code */
                    // cout << arr[rightIdx] << '\n';

                    res++;
                }
                rightIdx++;
            }
        }
    }

    cout << res;

    return 0;
}
