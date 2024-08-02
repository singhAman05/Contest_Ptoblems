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
    cin.ignore();
    while (t--)
    {
        string a;
        getline(cin,a);
        // cout<<a<<endl;
        cout<<a[4]<<a[1]<<a[2]<<" "<<a[0]<<a[5]<<a[6]<<endl;
    }
    return 0;
}
