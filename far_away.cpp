//FARAWAY
#include"bits/stdc++.h"
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        long long a[n];
        for(long long i=0;i<n;++i){
            cin>>a[i];
        }
        long long sum=0,mini=1,maxi=m;
        for(long long i=0;i<n;++i){
            sum += max(abs(a[i] - 1),abs(a[i] - maxi));
        }
        cout<<sum<<endl;
    }
    return 0;
}