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
        string s;cin>>s;
        uocm mp;
        int n = s.size();
        int ans = INT_MAX;
        for(auto it : s) mp[it]++;
        
        for(auto it : mp){
            char ch = it.first;
            int fre = it.second;
            int cnt = 0;
            int l=0,r=fre-1;
            
            for(int i=l;i<=r;i++){
                if(s[i]==ch) cnt++;
            }
            
            ans = min(ans,fre-cnt);
            
            while(r<n){
                if(s[l]==ch) cnt--;
                if(r+1<n && s[r+1]==ch) cnt++;
                l++;r++;
                
                ans = min(ans,fre-cnt);
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
