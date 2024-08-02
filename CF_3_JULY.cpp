#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;

// Function to calculate minimum cost
int solve(int si, const string& str) {
    int cost = 0;
    stack<int> st;  // Corrected type

    for (int i = 0; i < si; ++i) {
        if (str[i] == '(') {
            st.push(i);
        } else if (str[i] == ')') {
            if (!st.empty()) {
                cost += i - st.top();
                st.pop();
            }
        }
    }

    return cost;
}

// Function to restore and calculate cost
int fun(int si, string str) {
    for (int i = 0; i < si; i += 2) {
        if (str[i] == '_') {
            if (i == 0 || str[i - 1] == ')') {
                str[i] = '(';
            } else {
                str[i] = ')';
            }
        }
    }

    return solve(si, str);
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = fun(n, s);
        cout << ans << endl;
    }

    return 0;
}
