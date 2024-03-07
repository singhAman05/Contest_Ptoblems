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
        if(__builtin_popcount(n)&1) cout<<"ODD\n";
        else cout<<"EVEN\n";
    }
    return 0;
}
