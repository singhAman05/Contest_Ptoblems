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

    int t;
    cin >> t;
    while (t--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        vector<string> vec1(num1);

        for (auto &it : vec1)
            cin >> it;

        int temp1 = -1, tmp2 = -1;
        for (int ind1 = 0; ind1 < num1; ind1++)
        {
            for (int ind2 = 0; ind2 < num2; ind2++)
            {
                if (vec1[ind1][ind2] == '#')
                {
                    temp1 = ind2;
                    break;
                }
            }
            if (temp1 != -1)
                break;
        }

        for (int ind2 = 0; ind2 < num2; ind2++)
        {
            for (int ind1 = 0; ind1 < num1; ind1++)
            {
                if (vec1[ind1][ind2] == '#')
                {
                    tmp2 = ind1;
                    break;
                }
            }
            if (tmp2 != -1)
                break;
        }

        cout << tmp2 + 1 << " " << temp1 + 1 << endl;
    }
    return 0;
}
