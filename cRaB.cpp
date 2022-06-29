//Problem name "Change Row and Collumn both"
//Problem name "CHANGEPOS"

#include"bits/stdc++.h"
using namespace std;
int main(){

    //Taking input testcases
   int t;cin>>t;
   while(t--){

      //Initializing req. variables
      int s1,s2,e1,e2;cin>>s1>>s2>>e1>>e2;

      //Main code logic
      if(s1!=e1 && s2!=e2){
         cout<<"1"<<endl;
      }

      else{
         cout<<2<<endl;
      }
   }
   return 0;
}