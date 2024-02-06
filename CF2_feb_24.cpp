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
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        string s;
        vi fre(26,0), tmp(n);
        for(int i=0;i<n;i++){
        	for(auto j='a';j<='z';j++){
        		if(fre[j-'a']==ar[i]){
        			fre[j-'a']++;
        			s+=j;
        			break;
        		}
        	}
        }
        cout<<s<<endl;
        
        
    }
    return 0;
}
