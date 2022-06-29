//Problem name "EQUAL EVEN ODD"
//Problem code "EVEQODD"

#include"bits/stdc++.h"
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define int long long
using namespace std;

void solve(){

    //Inside function logic
   int a,e=0,o=0;
   cin>>a;
   a=a*2;
   vector<int> k(a,0);
   for(int i=0;i<a;i++){
      cin>>k[i];
      o+=k[i]%2;
   }
   e=a-o;
   if(o>e){
      int r=o-(a/2);
      cout<<r<<endl;
   }
   else{
      vector<int> ti;
      for(int i=0;i<a;i++){
         int y=k[i];
         if(y%2) continue;
         int c=0;
         while(y%2==0){
            y/=2;
            c++;
         }
         ti.push_back(c);
      }
      sort(ti.begin(),ti.end());
      int r=0;
      for(int i=0;i<e- a/2;i++) r+=ti[i];
      cout<<r<<endl;
   }
}
signed main(){
   fastio
   int t;cin>>t;
   while(t--){
      solve();
   }
}