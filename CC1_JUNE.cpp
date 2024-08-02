#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = 0;
        for (int i = 1; i < n; i++)
            ans += abs(v[i] - v[i - 1]);

        int res = ans;

        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                // Change v[i] to 1 and calculate the new sum
                int tmp = ans - abs(v[i] - v[i - 1]) + abs(1 - v[i - 1]);
                if (i < n - 1)
                {
                    tmp -= abs(v[i] - v[i + 1]);
                    tmp += abs(1 - v[i + 1]);
                }
                res = max(res, tmp);
            }

            if (i < n - 1)
            {
                // Change v[i] to k and calculate the new sum
                int tmp = ans - abs(v[i] - v[i + 1]) + abs(k - v[i + 1]);
                if (i > 0)
                {
                    tmp -= abs(v[i] - v[i - 1]);
                    tmp += abs(k - v[i - 1]);
                }
                res = max(res, tmp);
            }
        }

        cout << res << endl;
    }
    return 0;
}
