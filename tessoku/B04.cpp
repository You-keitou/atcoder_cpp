#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    int length, sum = 0;

    cin >> N;
    length = N.length();
    for (int i = 0; i < length; i++)
    {
        sum += int(N[i] - '0') * (1 << length - i - 1);
    }
    cout << sum << endl;
    return 0;
}
