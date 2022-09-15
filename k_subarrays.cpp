//K SUBARRAYS
#include"bits/stdc++.h"
using namespace std;
long long main(){
    long long t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        long long a[n];
        long long l=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            l=__gcd(l,a[i]);
        }
        long long j=0,c=0,t=0;
        while(j<n && t<k){
            c=0;
            while(j<n && c!=l){
                c=__gcd(c,a[j]);
                j+=1;
            }
            if(c==l) t+=1;
        }

        if(t==k){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}