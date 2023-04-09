#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;
    int input, A[N], sum[N];

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        if (input)
            A[i] = 1;
        else
            A[i] = -1;
    }

    sum[0] = A[0];
    for (int i = 1; i < N; i++)
        sum[i] = sum[i - 1] + A[i];

    cin >> Q;
    int l, r;
    for (int i = 0; i < Q; i++)
    {
        cin >> l >> r;
        if (sum[r-1] - (l-2 >=0 ? sum[l-2]:0) > 0)
            cout << "win" << endl;
        else if (sum[r-1] - (l-2 >=0 ? sum[l-2]:0) == 0)
            cout << "draw" << endl;
        else
            cout << "lose" << endl;
    }
    return 0;
}