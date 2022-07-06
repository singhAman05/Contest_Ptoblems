//Problem code:- PRIME_XOR

#include"bits/stdc++.h"
using namespace std;
long long int m=10e9+7;
int main(){
   int t;cin>>t;
   while(t--){
      int x,y;cin>>x>>y;

      int a=x^y, b=2^x, c=2^y, d=2^a;

      vector<int> ar={2};
      if(b&1) ar.push_back(b);
      if(c&1) ar.push_back(c);
      if(d&1) ar.push_back(d);

      sort(ar.begin(),ar.end());
   for_each(ar.begin(),
               ar.end(),
               [](const auto& e) {
                  cout<<e<<" ";
               });
               cout<<endl;
   }
   return 0;
}