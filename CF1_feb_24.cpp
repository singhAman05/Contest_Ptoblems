#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;

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
        int i=0,j=n-1;
        	while(i<n && s[i]=='W') i++;
        	while(j>=0 && s[j]=='W') j--;
        	// if(j==i) cout<<1
        	// cout<<i<<" "<<j<<endl;
        	cout<<j-i+1<<endl;
    }
    return 0;
}
