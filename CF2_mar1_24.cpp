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
        ll n;cin>>n;
        vl a(n);
        ll l = 0;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n-1;i++){
        	if(a[i-1]<=a[i+1] && a[i]>=2*a[i-1]){
        		a[i+1]-=a[i-1];
        		a[i]-=2*a[i-1];
        		a[i-1]=0;
        	}
        }
        
        for(int i=0;i<n;i++){
        	if(a[i]){l=1;break;}
        }
        if(l) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
