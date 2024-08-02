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
        int m,n,k;cin>>n>>m>>k;
        vi a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int ans = 0;
        for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
        		if(a[i]+b[j] <= k) ans++;
        	}
        }
        cout<<ans<<endl;
    }
    return 0;
}
