#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<long long,long long> uom;
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
        vl a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long sum = 0;
        uom mp;
        mp[0]++;
        long long  ans = 0;
        for(int i=0;i<n;i++){
        	sum+=a[i];
        	mp[a[i]]++;
        	if(sum%2==0 ){
        		long long tmp = sum/2;
        		
        		if(mp.count(tmp)){ans++;}
        	}
        	
        }
        cout<<ans<<endl;  
}
    return 0;
}
