//CHEFLAND GAMES
#include"bits/stdc++.h"
using namespace std;
long long main(){
    long long t;cin>>t;
    while(t--){
        set<long long> s;
        for(long long i=0;i<4;i++){
            long long x;cin>>x;
            s.insert(x);
        }
        long long l=0;
        for(auto it=s.begin();it!=s.end();++it){
            if(*it==1){
                l++;
            }
        }
        if(l==0){
            cout<<"IN"<<endl;
        }
        else cout<<"OUT"<<endl;
    }
    return 0;
}