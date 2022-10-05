// Confusing Concatenations

#include "bits/stdc++.h"
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long m = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > arr[m])
        {
            m = i;
        }
    }
    if (m == 0)
        cout << -1 << endl;
    else
    {
        cout << m << endl;
        for (long long i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << n - m << endl;
        for (long long i = m; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
long long main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}