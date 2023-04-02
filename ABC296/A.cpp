#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    bool flag = true;
    string str;

    cin >> N;
    cin >> str;

    for (int i = 0; i < N - 1; i++)
    {
        if (str[i] == str[i+1])
        {
            flag = false;
            break;
        }
    }
    puts(flag ? "Yes" : "No");
    return 0;
}