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
        int n,f,k;cin>>n>>f>>k;
        vi v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int num = v[f-1];
        // cout<<num<<"\n";
        sort(v.rbegin(),v.rend());
        int i=0;
        int y=k;
        int l=1;
        if(k==n){cout<<"YES\n";continue;}
        while(k--){
        	if(v[i]==num){
        		int x = min(y,n-1);
        		// cout<<x<<"\n";
        		
        		if(v[x]==num){
        			cout<<"MAYBE\n";
        			l=0;
        			break;
        		}
        		else if(v[x]<num){
        			l=0;
        			cout<<"YES\n";
        			break;
        		}
        	}
        	i++;
        }
        if(l==1)cout<<"NO\n";
    }
    return 0;
}
