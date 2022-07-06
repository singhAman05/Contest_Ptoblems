//Problem code:- SRTARR

#include"bits/stdc++.h"
using namespace std;
long long int m=10e9+7;
int main(){
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      string str;cin>>str;
      int l=0;
      for(int i=0;i<n;i++){
         if(str[i]=='1' && str[i+1]=='0'){
            l+=1;
         }
      }

      cout<<l<<endl;
   }
   return 0;
}