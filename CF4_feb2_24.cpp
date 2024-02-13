#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;

int fun(int num, int x){
	return (x-(num%x))%x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--)
    {
        ll n,a,b;cin>>n>>a>>b;
        vl vr(n);
        map<ll,map<ll,ll>> mp;
        for(ll i=0;i<n;i++){
        	cin>>vr[i];
        	mp[vr[i]%a][vr[i]%b]++;
        }

        ll ans = 0;
        for(int i=0;i<n;i++){
        	// int num = vr[i];
        	ll ind1 = fun(vr[i],a);
        	ll ind2 = vr[i]%b;
        	ans += mp[ind1][ind2] - (vr[i]%a == ind1);
        }
        cout<< (ans>>1)<<endl;
    }
    return 0;
}
