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
        string s;cin>>s;
        set<char> st(s.begin(),s.end());
        string s2(st.begin(),st.end());
        string s3 = s2;
        reverse(s2.begin(),s2.end());
        // cout<<s2;
        unordered_map<char,char> mpc;
        for(int i=0;i<s2.size();i++){
        	mpc[s2[i]]=s3[i];
        }
        
        for(int i=0;i<n;i++){
        	s[i] = mpc[s[i]];
        }
        
        cout<<s<<endl;
    }
    return 0;
}
