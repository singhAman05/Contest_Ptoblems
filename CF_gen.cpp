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
        vi a(n),b(n),c(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];
        
        multiset<pair<int,int>> x,y;
        for(int i=0;i<n;i++){
        	x.insert({b[i],i});
        	y.insert({c[i],i});
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
        	x.erase({b[i],i});
        	y.erase({c[i],i});
        	if((*x.rbegin()).second==(*y.rbegin()).second){
        		ans = max({ans, a[i] + (*(--x.end())).first + (*(--(--y.end()))).first});
        		ans = max({ans, a[i] + (*(--y.end())).first + (*(--(--x.end()))).first});
        	}
        	else{
        		ans = max({ans, a[i] + (*(--x.end())).first + (*(--y.end())).first});
        	}
        	
        	x.insert({b[i],i});
        	y.insert({c[i],i});
        }
        cout<<ans<<"\n";
    }
    return 0;
}
