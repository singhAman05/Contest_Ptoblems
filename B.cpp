// Problem: B. Blank Space
// Contest: Codeforces - Codeforces Round 871 (Div. 4)
// URL: https://codeforces.com/contest/1829/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
        int n;cin>>n;
        vi v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
        int i=0;
        int ans = 0;
        while(i<n){
        	int cnt = 0;
        	while(i<n && v[i]==0) {cnt++;i++;}
        	ans = max(ans,cnt);
        	i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
