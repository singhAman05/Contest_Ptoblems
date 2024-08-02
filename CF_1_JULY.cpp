#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int, int> mpi;
typedef set<int> seti;
typedef unordered_map<int,int> uom;
typedef unordered_map<char,int> uocm;

char getNextChar(char c) {
    // If the character is 'z', return 'a'
    if (c == 'z') {
        return 'a';
    }
    // Otherwise, return the next character
    return c + 1;
}

int calculateTime(const string& s) {
    int time = 2; // Time for the first character
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            time += 1; // Same character
        } else {
            time += 2; // Different character
        }
    }
    return time;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        
        string bestResult;
        int maxTime = 0;

        for (char c = 'a'; c <= 'z'; c++) {
            for (int i = 0; i <= s.size(); i++) {
                string newStr = s.substr(0, i) + c + s.substr(i);
                int newTime = calculateTime(newStr);
                if (newTime > maxTime) {
                    maxTime = newTime;
                    bestResult = newStr;
                }
            }
        }

        cout << bestResult << endl;
    }
    return 0;
}
