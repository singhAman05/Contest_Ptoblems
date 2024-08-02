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
        int ans = 0;
        int ind = 2;
        for(int i=2;i<=n;i++){
        	int sum = 0;
        	for(int j=i;j<=n;j+=i){
        		sum+=j;
        	}
        	if(ans<sum){
        		ind = i;
        		ans = sum;
        	}
        }
        cout<<ind<<endl;
    }
    return 0;
}
