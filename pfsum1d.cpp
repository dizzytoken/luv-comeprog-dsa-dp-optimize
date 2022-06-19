#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int pf[N];
int a[N];

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		pf[i] = a[i] + pf[i-1];
	}
	int T;
	cin >> T;
	while(T--){
		int x, y;
		cin >> x >> y;
		cout << pf[y] - pf[x-1] << endl;
	}
	return 0;
}