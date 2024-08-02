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
        int n; 
        cin >> n; 
        vector<int> v(n); 
        for(int i = 0; i < n; i++) { 
            cin >> v[i]; 
        } 

        if (n < 3) {
            cout << 0 << endl;
            continue;
        }

        unordered_map<string, int> m; 

        string s = "";
        s += to_string(v[0]);
        s += to_string(v[1]);
        s += to_string(v[2]);
        m[s]++; 

        for(int i = 3; i < n; i++) { 
            s = s.substr(1) + to_string(v[i]);
            m[s]++; 
        } 

        long long sum = 0; 
        for(auto it = m.begin(); it != m.end(); ++it) { 
            string l = it->first; 
            int count = it->second; 

            for(int i = 0; i < 3; i++) { 
                char original_char = l[i]; 
                for(char a = '0'; a <= '9'; a++) { 
                    if(original_char != a) { 
                        l[i] = a; 
                        if (m.find(l) != m.end()) {
                            sum += count * m[l]; 
                        }
                    } 
                } 
                l[i] = original_char; 
            } 
        } 

        cout << sum/2 << endl;
    }
    return 0;
}
