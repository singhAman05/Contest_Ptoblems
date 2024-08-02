#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef set<int> seti;
typedef set<seti> ssti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;

vector<vector<int>> matTrans(const vector<vector<int>> &mat)
{
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> ans(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            ans[j][i] = mat[i][j];
        }
    }

    return ans;
}

int solve()
{
    ll num, num2;
    cin >> num >> num2;

    vector<vector<int>> vis1(num, vector<int>(num2));
    vector<vector<int>> vis2(num, vector<int>(num2));

    for (ll i = 0; i < num; i++)
    {
        for (ll j = 0; j < num2; j++)
        {
            cin >> vis1[i][j];
        }
    }

    for (ll i = 0; i < num; i++)
    {
        for (ll j = 0; j < num2; j++)
        {
            cin >> vis2[i][j];
        }
    }

    if (num == num2)
    {
        ssti set_st;
        for (auto it : vis1)
        {
            seti tmp(it.begin(), it.end());
            set_st.insert(tmp);
        }

        for (auto it : vis2)
        {
            seti tmp(it.begin(), it.end());
            if (set_st.find(tmp) == set_st.end())
            {
                cout << "NO" << endl;
                return 1;
            }
        }

        vis1 = matTrans(vis1);
        vis2 = matTrans(vis2);

        set_st.clear();

        for (auto it : vis1)
        {
            set<int> tmp(it.begin(), it.end());
            set_st.insert(tmp);
        }

        for (auto it : vis2)
        {
            set<int> tmp(it.begin(), it.end());
            if (set_st.find(tmp) == set_st.end())
            {
                cout << "NO" << endl;
                return 1;
            }
        }

        cout << "YES" << endl;
    }
    else
    {
        ssti set_st;
        for (auto it : vis1)
        {
            seti tmp(it.begin(), it.end());
            set_st.insert(tmp);
        }

        for (auto it : vis2)
        {
            set<int> tmp(it.begin(), it.end());
            if (set_st.find(tmp) == set_st.end())
            {
                cout << "NO" << endl;
                return 1;
            }
        }

        set_st.clear();

        for (int j = 0; j < num2; j++)
        {
            set<int> tmp;
            for (int i = 0; i < num; i++)
            {
                tmp.insert(vis1[i][j]);
            }
            set_st.insert(tmp);
        }

        for (int j = 0; j < num2; j++)
        {
            seti tmp;
            for (int i = 0; i < num; i++)
            {
                tmp.insert(vis2[i][j]);
            }
            if (set_st.find(tmp) == set_st.end())
            {
                cout << "NO" << endl;
                return 1;
            }
        }

        cout << "YES" << endl;
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
        ll t = solve();
    }
    return 0;
}
