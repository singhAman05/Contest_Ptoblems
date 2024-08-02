#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;
typedef unordered_map<char,int> uocm;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n,m,x;cin>>n>>m>>x;
        set<int> s1;
        s1.insert(x);

        for (int j = 0; j < m; j++) {
            int r;
            string c;
            cin >> r >> c;

            set<int> s2;

            for (int it : s1) {
                int tmp;
                int dif1  = it - 1 + r;
                int dif2 = it - 1 - r;
                if (c == "0") {
                    tmp = ((dif1) % n + n) % n + 1;
                } else if (c == "1") {
                    tmp = ((dif2) % n + n) % n + 1;
                } else {
                    int tmpC = ((dif1) % n + n) % n + 1;
                    int tmpCC = ((dif2) % n + n) % n + 1;
                    s2.insert(tmpC);
                    s2.insert(tmpCC);
                    continue;
                }

                s2.insert(tmp);
            }

            s1 = s2;
        }

        cout << s1.size() << endl;
        for (int it : s1) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
