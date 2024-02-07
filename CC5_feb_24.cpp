#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<long long, long long>> vpi;
typedef map<int,int> mpi;
typedef set<int> seti;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vpi tmp(n);
        vl vis(2*n);
        for(int i = 0; i < 2*n; i++){
            cin >> vis[i];
            vis[i]--;
            ll x = i - tmp[ vis[i] ].first;
            tmp[ vis[i] ].first = x;
            tmp[ vis[i] ].second = vis[i];
        }
        sort(tmp.rbegin(),tmp.rend());
        for(auto &x : tmp){
            cout << x.second+1 << ' ';
        }
        cout << endl;

    }
    return 0;
}
