// Chef and Happy String

#include "bits/stdc++.h"
using namespace std;
long long main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        long long c = 1;
        cin >> s;
        for (long long i = 0; i < s.size() - 1; i++)
        {
            if (c > 2)
            {
                break;
            }
            c = 1;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                for (long long j = i + 1; j < s.size(); j++)
                {
                    if (c > 2)
                    {
                        break;
                    }
                    if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                    {
                        ++c; // abcdeeafg
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        if (c > 2)
        {
            cout << "HAPPY" << endl;
        }
        else
        {
            cout << "SAD" << endl;
        }
    }
    return 0;
}