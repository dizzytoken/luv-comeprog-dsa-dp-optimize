#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int pf[N][N];
int arr[N][N];

int main(int argc, char const *argv[])
{
	int m,n;
	cin >> m >> n;

	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; i <= n; ++i)
		{
			cin >> arr[i][j];
			pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1] + pf[j-1];
		}
	}


	int T;
	cin >> T;

	while(T--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		cout << pf[c][d] - pf[a-1][d] - pf[c-1][d-1] + pf[a-1][b-1];
	}
	return 0;
}