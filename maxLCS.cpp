#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        string str1;
        cin >> str1;
        string str2 = str1;
        reverse(str1.begin(), str1.end());
        vector<vector<int>> asr(num + 1, vector<int>(num + 1, 0));
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= num; j++)
            {
                if (str1[j - 1] != str2[i - 1])
                    asr[i][j] = max(asr[i][j - 1], asr[i - 1][j]);
                else
                    asr[i][j] = asr[i - 1][j - 1] + 1;
            }
        }
        int ans = asr[num][num] / 2;
        cout << ans << endl;
    }
    return 0;
}