#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int, int> uom;
typedef unordered_map<char, int> uocm;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;
    while (test--)
    {
        int num;
        cin >> num;
        vector<vector<char>> grid(2, vector<char>(num));
        
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < num; j++) {
                cin >> grid[i][j];
            }
        }
        
        int ans = 0;
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < num; j++) {
                if (j+2 < num && i+1 < 2 && grid[i][j]=='x' && grid[i][j+2]=='x' && grid[i][j+1]=='.' && grid[i+1][j+1]=='.' && grid[i+1][j]=='.' && grid[i+1][j+2]=='.') ++ans;
                if (i-1 >= 0 && j+2 < num && grid[i][j]=='x' && grid[i][j+2]=='x' && grid[i][j+1]=='.' && grid[i-1][j]=='.' && grid[i-1][j+1]=='.' && grid[i-1][j+2]=='.') ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
