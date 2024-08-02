#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;
typedef unordered_map<char,int> uocm;

ll solve(ll mid){
    ll ans = 0;
    for(ll k=2;k*k*k<=mid;k++){
        ans += (mid/(k*k*k));
    }
    
    return ans;
}
const int mod = 998244353;
bool ispalin(string tmp){
    string rev = tmp;
    reverse(rev.begin(),rev.end());
    return tmp==rev;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
        getline(cin, s);
        int n = s.size();
        // cout << n << endl;
        char ch;
        for (ll i = n - 1; i >= 0; i--)
        {
            if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z'))
            {
                ch = s[i];
                break;
            }
        }
 
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y' or ch == 'Y' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    return 0;
}
