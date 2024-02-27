#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;

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
        vector<string> v;
        for(int i=0;i<n;i++){
        	string s;cin>>s;
        	v.push_back(s);
        	// cout<<s<<endl;
        }
		int l=0;
		string ans="";
        for(int i=0;i<n;i++){
        	for(int j=0;j<n;j++){
        		// cout<<v[i][j]<<" ";
        		if(v[i][j]=='1'){
        			if((j<n-1 && v[i][j+1]=='0') || (i<n-1 && v[i+1][j]=='0')) ans = "TRIANGLE";
        			else ans = "SQUARE";
        			l=1;
        			break;
        		}
        	}
        	if(l==1)break;
        	// cout<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
