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
        vi ar(n);
        int sum = 0;
        for(int i=0;i<n;i++){
        	cin>>ar[i];
        	sum+=ar[i];
        }
        int same = sum/n;
        int l = 0;
        int flg = 0;
        for(int i=0;i<n;i++){
        	if(ar[i]<same){
        		if(ar[i]+l<same){
        			flg=1;break;
        		}
        		l-=same-ar[i];
        	}
        	else{
        		l+=ar[i]-same;
        	}
        }
        if(flg) cout<<"NO\n";
        else cout<<"YES\n";
        
    }
    return 0;
}
