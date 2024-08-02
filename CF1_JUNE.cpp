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
        int n;cin>>n;
        int m;cin>>m;
        string s;cin>>s;
        uocm mp;
        for(auto it : s) mp[it]++;
        int ans = 0;
        for(char ch = 'A';ch<='G';ch++){
        	if(mp[ch]<m) ans += m-mp[ch];
        }
        cout<<ans<<endl;
    }
    return 0;
}
