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
        vi vr(n);
        for(int i=0;i<n;i++) cin>>vr[i];
        if(n==0) cout<<"0\n";
        int l=0,r=n-1;
        while(vr[0]==vr[l]) l++;
        while(vr[n-1]==vr[r]) r--;
        
        if(vr.front()!=vr.back()){
        	cout<<min(n-l,r+1)<<endl;
        }
        else{
        	cout<<max(0,r-l+1)<<endl;
        }
    }
    return 0;
}
