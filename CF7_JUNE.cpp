#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<long long> vi;
typedef vector<ll> vl;
typedef map<long long, long long> mpi;
typedef set<long long> seti;
typedef unordered_map<long long, long long> uom;
typedef unordered_map<char, long long> uocm;

void solve(vector<bool> &tmp, long long num)
{
    for (long long qwe = 2; qwe * qwe <= num; ++qwe)
    {
        if (tmp[qwe])
        {
            for (long long ind = qwe * qwe; ind <= num; ind += qwe)
                tmp[ind] = false;
        }
    }
    tmp[0] = false;
    tmp[1] = false;
}

long long main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long num = 100000;
    vector<bool> tmp(num + 1, true);

    solve(tmp, num);

    vector<long long> res;
    for (long long ind = 0; ind <= num; ++ind)
    {
        if (tmp[ind])
            res.push_back(ind);
    }

    long long t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        if (num < 38)
        {
            cout << "NO" << endl;
            continue;
        }
        long long ans = num - 4;
        long long l = 0;
        for (long long ind : res)
        {
            if (ind * ind >= ans)
                break;
            long long answer = ans - ind * ind;
            long long qwe = sqrt(answer);
            if (qwe * qwe != answer)
                continue;
            if (tmp[qwe])
            {
                l = 1;
                break;
            }
        }
        if (l)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
