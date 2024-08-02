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
        ll num1, num2, num3, tmp;
        cin >> num1 >> num2 >> num3 >> tmp;
        ll ans = 0;
        for (int ind1 = 1; ind1 <= num1; ind1++)
        {
            for (int ind2 = 1; ind2 <= num2; ind2++)
            {
                if (tmp % (ind1 * ind2) == 0 && (tmp / (ind1 * ind2) <= num3))
                {
                    ans = max(ans, (num1 - ind1 + 1) * (num2 - ind2 + 1) * (num3 - (tmp / (ind1 * ind2)) + 1));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
