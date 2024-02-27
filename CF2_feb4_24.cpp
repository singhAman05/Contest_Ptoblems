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
        uom mp;
        ll sum = 0;
        for(int i=0;i<n;i++){
        	int x;cin>>x;
        	sum+=x;
        	mp[x%3]++;
        }
        int rem = sum%3;
        if(rem==0)cout<<"0\n";
        else if(rem==2)cout<<"1\n";
        else if(mp.find(rem)!=mp.end())cout<<"1\n";
        else cout<<"2\n";
        
    }
    return 0;
}
