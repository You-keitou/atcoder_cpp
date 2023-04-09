#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    char ans[10];
    cin >> N;

    for (int i = 0; i < 10; i++)
    {
        ans[9-i] = char('0' + N % 2);
        N /= 2;
    }
    cout << ans << endl;
    return 0;
}