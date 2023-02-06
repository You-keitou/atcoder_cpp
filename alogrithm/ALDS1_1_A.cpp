#include<iostream>
#include<algorithm>

using namespace std;
const int MAX = 100;

int main()
{
	int n, R[MAX];
	
	cin >> n;
	for(int i = 0; i < n; i++) cin >> R[i];
	cout << R[0] << endl;
	return 0;
}