#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;

    cin >> T >> N;
    int L[N], R[N], jikanhi[T], ans[T+1];
    for (int i = 0; i < N; i++)
    {
        cin >> L[i] >> R[i];
        jikanhi[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        jikanhi[L[i]] += 1;
        jikanhi[R[i]] -= 1;
    }
    ans[0] = jikanhi[0];
    for (int i = 1; i <= T; i++)
    {
        ans[i] = ans[i - 1] + jikanhi[i];
        cout << ans[i - 1] << endl;
    }
    return 0;
}
