//MAXIMIZE COLOURS
#include"bits/stdc++.h"
using namespace std;
long long main(){
    long long t;cin>>t;
    while(t--){
        long long a[3];
        for(long long i=0;i<3;++i){
            cin>>a[i];
        }
        sort(a,a+3);
        long long b=a[0],c=a[1],d=a[2];
        long long l=0;
        for(long long i=0;i<3;i++){
            if(a[i]>=1){
                l+=1;
            }
        }

        if(b==2){
            if(d>=3){
                cout<<l+2<<endl;
            }
            else{
                cout<<l+1<<endl;
            }
        }
        else if(b>=3){
            cout<<l+3<<endl;
        }
        else{
            if(c<=1){
                cout<<l<<endl;
            }
            else{
                cout<<l+1<<endl;
            }
        }
    }
    return 0;
}