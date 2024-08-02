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
        int ans = 0;
        int i=0;
        while(i<n-2){
        	if(i<n-4 && s.substr(i,5)=="mapie") {ans++;i+=5;}
        	else if(s.substr(i,3)=="map") {ans++;i+=3;}
        	else if(s.substr(i,3)=="pie"){ans++;i+=3;}
        	else i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
