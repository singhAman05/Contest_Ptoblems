#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,vector<int>> uom;

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
        vi ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        uom mp;
        vi pre(n);
        pre[n-1] = n;
        for(int i=n-2;i>=0;i--){
        	pre[i] = i+1;
        	if(ar[i]==ar[i+1]){
        		pre[i] = pre[i+1];
        	}
        	
        }
        
        int q;cin>>q;
        while(q--){
        	int l,r;cin>>l>>r;
        	int x = l-1;
        	int y = r-1;
        	if(pre[x] > y) cout<<"-1"<<" "<<"-1\n";
        	else{
        		cout<<l<<" "<<1+pre[x]<<endl;
        	}
        }
        cout<<endl;
    }
    return 0;
}
