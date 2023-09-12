// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n;
//     int a[n];

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     // 1 Sort decroissant
//     sort(a, a + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{             // 1   20
    int size; // 4
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {                  // 0 1 2 3
        cin >> arr[i]; // [3,2,1,0]   [0 1 2 3]
    }
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {                          // 0 1 2 3
        cout << arr[i] << " "; // [3,2,1,0]   [0 1 2 3]
    }
}
