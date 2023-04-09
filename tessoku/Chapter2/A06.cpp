#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    int A[N],sum[N], L1, L2;

    for (int i = 0; i < N; i++)
        cin >> A[i];
    sum[0] = A[0];

    for (int i = 1; i < N; i++)
    {
        sum[i] = sum[i - 1] + A[i];
    }

    for (int i = 0; i < Q; i++)
    {
        cin >> L1 >> L2;
        cout << sum[L2 - 1] - sum[L1 - 2] << endl;
    }

    return 0;
}
