#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;

const int N = 2e5 + 10;

int T, n, musk;
string s;
vector<int> t;

bool solve(int k) {
    int tmp = musk / k;
    vector<int> start(tmp), end(tmp), length(tmp);
    for (int ind = 0; ind < tmp; ++ind) {
        start[ind] = t[ind * k];
        end[ind] = t[(ind + 1) * k - 1];
        length[ind] = end[ind] - start[ind] + 1;
    }

    for (int ind = 1; ind < tmp; ++ind) {
        if (length[ind] != length[0]) return false;
        for (int j = 0; j < length[0]; ++j) {
            if (s[start[0] + j] != s[start[ind] + j]) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> s;
        n = s.size();
        musk = 0;
        t.clear();

        for (int ind = 0; ind < n; ++ind) {
            if (s[ind] != 'a') {
                t.push_back(ind);
                musk++;
            }
        }

        if (musk == 0) {
            cout << n - 1 << endl;
            continue;
        }

        long long answer = 0;
        for (int ind = 1; ind <= sqrt(musk); ++ind) {
            if (musk % ind == 0) {
                if (solve(ind)) {
                    int tmp = musk / ind;
                    int min_gap = 1e9;
                    for (int j = 1; j < tmp; ++j) {
                        min_gap = min(min_gap, t[j * ind] - t[(j - 1) * ind] - 1);
                    }
                    int L = t[0] - 1, R = n - t[musk - 1] - 1;
                    for (int j = 0; j <= L; ++j) {
                        answer += max(0LL, min(static_cast<long long>(min_gap - j + 1), static_cast<long long>(R + 1)));
                    }
                }
                if (ind * ind != musk && solve(musk / ind)) {
                    int tmp = musk / (musk / ind);
                    int min_gap = 1e9;
                    for (int j = 1; j < tmp; ++j) {
                        min_gap = min(min_gap, t[j * (musk / ind)] - t[(j - 1) * (musk / ind)] - 1);
                    }
                    int L = t[0] - 1, R = n - t[musk - 1] - 1;
                    for (int j = 0; j <= L; ++j) {
                        answer += max(0LL, min(static_cast<long long>(min_gap - j + 1), static_cast<long long>(R + 1)));
                    }
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}
