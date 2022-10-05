// Maximum Subarray

#include "bits/stdc++.h"
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n1;
        cin >> n1;
        long long arr[n1];
        for (long long i = 1; i <= n1; ++i)
        {
            cin >> arr[i];
        }
        long long n2;
        cin >> n2;
        long long brr[n2];
        for (long long i = 1; i <= n2; ++i)
        {
            cin >> brr[i];
        }
        long long ans = 0, sum = 0;
        for (long long i = 1; i <= n1; ++i)
        {
            sum += arr[i];
            ans = max(ans, sum);
        }
        sum = 0;
        for (long long i = n1; i >= 1; --i)
        {
            sum += arr[i];
            ans = max(ans, sum);
        }
        for (long long i = 1; i <= n2; ++i)
            if (brr[i] >= 0)
                ans += brr[i];

        cout << ans << endl;
    }
}