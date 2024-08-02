#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;
typedef unordered_map<char,int> uocm;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt1++;
        }
        
        if(k>=cnt1){
            for(int i=0;i<n-k;i++)cout<<'0';
            cout<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(k<=0) break;
                if(s[i]=='1'){
                    s[i]='0';k--;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
