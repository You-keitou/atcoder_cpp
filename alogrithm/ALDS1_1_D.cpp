#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
static const int MAX = 200000;

int main() {
	int R[MAX], n;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> R[i];

	int	ans = -999999999;
	int min_till_i = pow(10,9);
	
	for (int i = 1; i < n; i++)
	{
		if (min_till_i > R[i - 1]) min_till_i = R[i - 1];
		if (ans < R[i] - min_till_i) ans = R[i] - min_till_i;
	}
	cout << ans << endl;
	return 0;
}