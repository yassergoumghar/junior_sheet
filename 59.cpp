#include <iostream>

// #include <bits/stdc++.h>
// #include <cctype>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int upperCase, lowerCase = 0;

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if (isupper(s[i]))
            upperCase++;
        else
            lowerCase++;
    }

    if (upperCase <= lowerCase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            s[i] = tolower(s[i]);
        }
    }

    if (upperCase > lowerCase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            s[i] = toupper(s[i]);
        }
    }
    cout << s;

    return 0;
}
