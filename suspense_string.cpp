// Suspense String

#include "bits/stdc++.h"
using namespace std;
void solve()
{
    string str;
    long long n;
    cin >> n >> str;
    string s2 = "";
    long long ini = 0, last = n - 1;
    while (ini <= last)
    {
        if (str[ini] == '0')
            s2 = str[ini] + s2;
        else
            s2 = s2 + str[ini];
        if (ini < last)
        {
            if (str[last] == '0')
                s2 = s2 + str[last];
            else
                s2 = str[last] + s2;
            last--;
        }
        ini++;
    }
    cout << s2 << endl;
}
long long main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}