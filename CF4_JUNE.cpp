#include <bits/stdc++.h>
using namespace std;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;
#define pb push_back

// Function to check if the GCD sequence of v3 given array is non-decreasing
bool isValid(const vi &v3)
{
    ll n = v3.size();
    vi er(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        er[i] = __gcd(v3[i], v3[i + 1]);
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (er[i] < er[i - 1])
        {
            return 0;
        }
    }
    return 1;
}

// Function to sun the problem for each test case
void sun()
{
    ll n;
    cin >> n;
    vi v3(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v3[i];
    }

    vi er(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        er[i] = __gcd(v3[i], v3[i + 1]);
    }

    ll ind = -1;
    for (ll i = 1; i < n - 1; i++)
    {
        if (er[i] < er[i - 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        cout << "YES\n";
        return;
    }

    for (ll j = ind - 1; j <= ind + 1; j++)
    {
        if (j < 0 || j >= n)
            continue; // Ensure we stay within bounds
        vi v;
        for (ll i = 0; i < n; i++)
        {
            if (i != j)
            {
                v.pb(v3[i]);
            }
        }
        if (isValid(v))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        sun();
    }

    return 0;
}
