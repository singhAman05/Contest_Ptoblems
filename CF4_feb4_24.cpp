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
        int n;
        cin >> n;
        vi arr;
        mpi mp;
        for(int i=0;i<n;i++){
        	int x;cin>>x;
        	mp[x]++;
        }
        
        if(mp.begin()->second==1){
        	cout<<"YES\n";
        	continue;
        }
        for(auto it : mp){
        	arr.push_back(it.first);
        }
        if(arr.size()==1) {cout<<"NO\n";continue;}
        
        int flg = 0;
        for(int i=0;i<arr.size();i++){
        	if(arr[i]%arr[0]!=0){
        		flg=1;break;
        	}
        }
        
        if(flg) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}
