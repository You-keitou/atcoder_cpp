#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a[8];
    string ans[8][8];

    for (int i = 7; i >= 0; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            ans[i][j] = string(1,static_cast<char>(static_cast<int>('a') + abs(j))) + to_string(abs(i - 7) + 1);
        }
    }

    for (int i = 0; i < 8; i++)
        cin >> a[i];

    for (int i = 0; i < 8; i++)
    {
        int j;
        j = a[i].find("*");
        if (j != string::npos)
        {
            cout << ans[i][j];
            break;
        }
    }
    return 0;
}