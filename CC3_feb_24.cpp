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
        int x,y;cin>>x>>y;
        if(y < x-1) cout<<0<<endl;
        else{
            cout<<y/(x-1)<<endl;
        }
    }
    return 0;
}
