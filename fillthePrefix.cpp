#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num1, num2, res = INT_MAX;
        cin >> num1 >> num2;
        string str1;
        cin >> str1;
        int asr[num1];
        int ct = 0;
        for (int i = 1; i < num1; i++)
        {
            if (str1[i - 1] != str1[i])
            {
                ct++;
                asr[i] = ct;
            }
            else
                asr[i] = ct;
        }
        asr[0] = 0;
        for (int i = num1 - 1; i >= 0; i--)
        {
            if ((i - (num2 - 1)) < 0)
                break;
            int ch = asr[i] - asr[i - num2 + 1];
            if (str1[i] == '0')
                ch++;
            res = min(res, ch);
        }
        cout << res << endl;
    }
}