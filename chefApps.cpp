//Problem name "CHEF AND HIS APPS"
//Problem name "CHEFAPPS"

#include"bits/stdc++.h"
using namespace std;
int main(){

    //Taking input testcases
   int t;cin>>t;
   while(t--){

    //Initializing req. variables
      int s,x,y,z;cin>>s>>x>>y>>z;
      int a=x+y;

      //Main code logic
      if((s-(x+y))>=z){
         cout<<"0"<<endl;
      }
      else{
         if((a-x+z)<=s || (a-y+z)<=s ){
            cout<<"1"<<endl;
         }
         else{
            cout<<"2"<<endl;
         }
      }
   }
   return 0;
}