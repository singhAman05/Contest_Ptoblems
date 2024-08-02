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
        double x,y;
        cin>>x>>y;
        if(x==0){
        	cout<<ceil((y*4)/8.0)<<endl;
        }
        else if(y==0){
        	cout<< ceil(x/15.0)<<endl;
        }
        else{
        int ans = ceil((y*4)/8.0);
        double rem = ans*15 - (y*4);
        x=max(0.0,x-rem);
        int ans2 = ceil(x/15.0);
        cout<<ans+ans2<<endl;}
    }
    return 0;
}
