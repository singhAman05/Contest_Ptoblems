#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;


ll countDistinctK(ll a, ll b, ll l) {
    unordered_set<ll> distinctK;

    for (ll x = 0, ax = 1; ax <= l; ++x, ax *= a) {
        for (ll y = 0, by = 1; ax * by <= l; ++y, by *= b) {
            if (l % (ax * by) == 0) {
                distinctK.insert(l / (ax * by));
            }
        }
    }
    return distinctK.size();
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
        ll a,b,l;cin>>a>>b>>l;
        cout << countDistinctK(a, b, l) << endl;
    }
    return 0;
}
