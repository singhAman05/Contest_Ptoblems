#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int,int> mpi;
typedef set<int> seti;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vi arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans, arr[i]*(n-i));
        }
        cout<<ans<<endl;
    }
    return 0;
}
