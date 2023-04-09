#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, N;
    cin >> D >> N;
    int L[N], R[N], zenjituhi[D] ,sum[D];

    for (int i = 0; i < D; i++)
        zenjituhi[i] = 0;
    for (int i = 0; i < N; i++)
        cin >> L[i] >> R[i];
    for (int i = 0; i < N; i++)
    {
        zenjituhi[L[i] - 1] += 1;
        zenjituhi[R[i]] -= 1;
    }
    sum[0] = zenjituhi[0];
    for (int i = 1; i < D; i++)
        sum[i] = sum[i - 1] + zenjituhi[i];

    for (int i = 0; i < D; i++)
        cout << sum[i] << endl;

    return 0;
}