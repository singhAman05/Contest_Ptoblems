#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vi v(n);
        for(int i=0;i<n;i++){
        	cin>>v[i];
        }
        int ans = 0;
    	for (int i = 0; i < 31; ++i) {
        int count0 = 0, count1 = 0;
        for (int num : v) {
            if ((num >> i) & 1) {
                ++count1;
            } else {
                ++count0;
            }
        }
        int res = max(count0, count1);

        ans = max(ans, res);
    }
    cout<<ans<<endl;}
    return 0;
}
