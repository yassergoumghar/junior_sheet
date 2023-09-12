// 1 At least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        int a, b, c;

        cin >> a >> b >> c;

        int sum = a + b + c;
        if (sum >= 2)
            ans++;
    }

    cout << ans << endl;

    return 0;
}
