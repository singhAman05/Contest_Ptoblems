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
       mpi mp;
       
       vi temp(n+1,1);
       vi v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       
       int sum = v[0];
       int ind = 0;
       for(int i=1;i<n;i++){
           sum+=v[i];
           while(sum>n){
               sum-=v[ind];
               ind++;
           }
           int tmp = ind;
           int new_sum = sum;
           while(i-tmp){
               temp[new_sum]++;
               new_sum-=v[tmp];
               tmp++;
           }
       }
       
      for(int i=1;i<=n;i++){
          cout<<temp[i]<<" ";
      }
    
    // for(auto it : mp){
    //     cout<<it.second<<" ";
    // }
       cout<<endl;
    }
    return 0;
}
