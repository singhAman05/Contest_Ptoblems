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
        int cnt1=0;
        int cnt0=0;
        int max_zeros=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                max_zeros = max(max_zeros,cnt0);
                cnt0=0;
                cnt1++;
                continue;
            }
            cnt0++;
        }
        max_zeros = max(max_zeros,cnt0);
        cout<<cnt1+max_zeros<<endl;
    }
    return 0;
}
