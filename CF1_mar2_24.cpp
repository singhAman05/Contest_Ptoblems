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
        int a,b,c;
        cin>>a>>b>>c;
        if(b%3 && (3 - (b%3) > c)) {cout<<"-1\n";continue;} 
        int ans = a;
        if(b%3)c = c - (3-(b%3));
        ans += ceil((double)b/3.0);
        ans += ceil((double)c/3.0);
        cout<<ans<<endl;
    }
    return 0;
}
