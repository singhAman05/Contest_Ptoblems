#include "bits/stdc++.h"
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        if (n % 2 != 0)
        {
            cout << "NO";
            return 0;
        }
        unordered_map<int, int> uo;
        for (int i = 0; i < n; i++)
        {
            uo[a[i]]++;
        }
        for (auto pr : uo)
        {
            if (pr.second % 2 != 0)
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}