#include <bits/stdc++.h>
using namespace std;

// O(N^3)　枝刈り、及び順列も用いたが、遅い
// int main()
// {
//     int N, K;
//     int ans = 0;

//     cin >> N >> K;
//     for (int i = 1; i <= N; i++)
//     {
//         if (i >= K)
//             break;
//         for (int j = i; j <= N; j++)
//         {
//             if (i + j >= K)
//                 break;
//             for (int k = j; k <= N; k++)
//             {
//                 if (i + j + k == K)
//                 {
//                     if (i == j && j == k)
//                         ans++;
//                     else if (i == j || i == k || j == k)
//                         ans += 3;
//                     else
//                         ans += 6;
//                     break;
//                 }
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// O(N^2)
// int main()
// {
//     int N, K;
//     int third_card;
//     int ans = 0;

//     cin >> N >> K;
//     for (int i = 1; i <= N; i++)
//     {
//         if (i >= K)
//             break;
//         for (int j = 1; j <= N; j++)
//         {
//             third_card = K - j - i;
//             if (1 <= third_card && third_card <= N)
//                 ans++;
//             else if (third_card <= 0)
//                 break;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

int main()
{
    int N, K;
    int sum_of_last_two_card;
    int ans = 0;

    cin >> N >> K;
    int l,r;
    for (int i = max(1, K - 2 * N); i <= min(K - 2, N); i++)
    {
        l = min(N, K - i - 1);
        r = max(1, K - i - N);
        ans += l - r + 1;
    }
    cout << ans << endl;
    return 0;
}