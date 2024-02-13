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
        char ch = 'a';
        if(n>=0 && n<=28){
        	ch+=n-3;
        	cout<<"aa"<<ch<<endl;
        }
        else if(n>28 && n<=52){
        	ch+=n-28;
        	cout<<"a"<<ch<<"z\n";
        }
        else{
        	ch+=n-53;
        	cout<<ch<<"zz\n";
        }
    	
    }
    return 0;
}
