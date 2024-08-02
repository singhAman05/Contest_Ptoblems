#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;

void solve()
{
    ll n;
    cin >> n;
    ll k;
    vi vec1(n), vec2(n);
    for (int i = 0; i < n; i++)
        cin >> vec1[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];
    bool falg = 0;
    int tmp = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            break;
        }
        if (vec1[i] + vec2[i] >= vec1[i + 1])
        {
        }
        else
        {
            tmp++;
        }
    }

    if (tmp <= 2)
    {
        falg = 1;
    }
    // cout<<falg<<endl;
    tmp = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            break;
        }
        if (vec1[i] - vec2[i] <= vec1[i - 1])
        {
        }
        else
        {
            // cout<<i<<endl;
            tmp++;
        }
    }

    // cout<<tmp<<endl;
    if (tmp <= 2)
    {
        falg = 1;
    }
    // cout<<falg<<endl;
    int res1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec1[i] + vec2[i] >= vec1[i + 1])
        {
            res1 = i + 1;
        }
        else
        {
            break;
        }
    }
    int res2 = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (vec1[i] - vec2[i] <= vec1[i - 1])
        {
            res2 = i - 1;
        }
        else
        {
            break;
        }
    }
    if (res1 + 1 >= res2)
    {
        falg = 1;
    }
    if (falg)
    {
        cout << "YES" << endl;
        return;
    }
    // left right case

    // left me kaha tak jaa sakt- 0 to default
    for (int i = 1; i < n; i++)
    {
        if (vec1[i] - vec2[i] <= vec1[i - 1])
        {
            continue;
        }
        else
        {
            // yaha se right jaana aue can we reach end
            // cout<<i<<endl;
            for (int j = i; j < n; j++)
            {
                if (j == n - 1)
                {
                    falg = 1;
                }
                if (vec1[j] + vec2[j] >= vec1[j + 1])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }

            break;
        }
    }

    if (falg)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
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
        solve();
    }
    return 0;
}
