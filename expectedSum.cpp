#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans = INT_MAX;
        cin >> a >> b;
        string s;
        cin >> s;
        int arr[a];
        int c = 0;
        for (int i = 1; i < a; i++)
        {
            if (s[i - 1] != s[i])
            {
                c++;
                arr[i] = c;
            }

            else
            {
                arr[i] = c;
            }
        }
        arr[0] = 0;
        for (int i = a - 1; i >= 0; i++)
        {
            if (i - (b - 1) < 0)
                break;
            int ch = arr[i] - arr[i - b + 1];
            if (s[i] == '0')
                ch++;
            ans = min(ans, ch);
        }

        cout << ans << endl;
    }
}