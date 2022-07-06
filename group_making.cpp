//Problem code:- GRPASSN

#include"bits/stdc++.h"
using namespace std;
long long int m=10e9+7;
int main(){
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      int p[n];
      map<int,int> m;
      for(int i=0;i<n;i++){
         cin>>p[i];
         m[p[i]]++;
      }

      string str="YES";

      for(auto it:m){
         if(it.second%it.first!=0){
            str="NO";
            break;
         }
      }

      cout<<str<<endl;
   }
   return 0;
}