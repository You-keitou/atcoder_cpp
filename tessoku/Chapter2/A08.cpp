#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    int map[H][W], sum[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> map[i][j];
            sum[i][j] = 0;
        }
    }
    //　横を累積和
    for (int i = 0; i < H; i++)
    {
        sum[i][0] = map[i][0];
        for (int j = 1; j < W; j++)
            sum[i][j] = sum[i][j - 1] + map[i][j];
    }
    // 縦を累積和
    for (int j = 0; j < W; j++)
    {
        for (int i = 1; i < H; i++)
            sum[i][j] = sum[i - 1][j] + sum[i][j];
    }

    // for (int i = 0; i < W; i++)
    // {
    //     for (int j = 0; j < H; j++)
    //         cout << sum[i][j] << " ";
    //     cout << endl;
    // }
    int Q;
    cin >> Q;
    return 0;
}