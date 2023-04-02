#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    bool flag = false;
    cin >> N >> X;

    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
        if (vec.at(i) == X)
        {
            flag = true;
        }
    }

    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}