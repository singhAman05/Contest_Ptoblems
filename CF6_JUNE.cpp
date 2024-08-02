#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;
ll glo;
bool solve(vl &vec1, vl &vec2, ll qwer)
{
    ll tmp = 0;
    for (int i = 0; i < vec1.size(); i++)
    {
        ll res = (qwer / vec2[i] + 1) * vec1[i];
        tmp += res;
        if (tmp >= glo)
            return 1;
    }
    return tmp >= glo;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll health, num;
        cin >> health >> num;
        glo = health;
        vl vec1(num), c(num);
        for (int i = 0; i < num; i++)
            cin >> vec1[i];
        for (int i = 0; i < num; i++)
            cin >> c[i];

        ll l = 0;
        ll r = 1e12;
        while (l + 1 < r)
        {
            ll mid = l + (r - l) / 2;
            if (solve(vec1, c, mid))
            {
                r = mid;
            }
            else
                l = mid;
        }
        if (solve(vec1, c, l))
        {
            cout << l + 1 << endl;
        }
        else
            cout << r + 1 << endl;
    }
    return 0;
}
