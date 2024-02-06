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
        int n,m,k;cin>>n>>m>>k;
        vi arr(n),brr(m);
        uom fr1,fr2;
        
        for(int i=0;i<n;i++){
        	cin>>arr[i];
        	fr1[arr[i]]++;
        }
        for(int i=0;i<m;i++){
        	cin>>brr[i];
        	fr2[brr[i]]++;
        }
        
        int hook1=k/2,hook2=k/2;
        int res = 0;
        
        for(int i=1;i<=k;i++){
        	if(fr1[i] && !fr2[i] && hook1>0) hook1--;
        	else if(fr2[i] && !fr1[i] && hook2>0) hook2--;
        	else if(fr1[i]>0 && fr2[i]>0) res++;
        }
        
        if(hook1+hook2==res) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
