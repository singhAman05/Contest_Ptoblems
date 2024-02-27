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
    	int l=0,p=0;
    	string s;cin>>s;
    	for(int i=0;i<5;i++){
    		if(s[i]=='A')l++;
    		else p++;
    	}
    	if(l>p) cout<<"A\n";
    	else cout<<"B\n";
    }
    return 0;
}
