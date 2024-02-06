// FARAWAY
#include "bits/stdc++.h"
using namespace std;
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << "oops\n";
                break;
            }
            else
                cout << "hello\n";
        }
    }
    return 0;
}