#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N][26];

int main(int argc, char const *argv[])
{
	int t, n, q;

	cin >> t;
	while(t--){
		for (int i = 0; i < N; ++i)
		{
			/* code */
			for (int j = 0; j < 26; ++j)
			{
				/* code */
				hsh[i][j] = 0;
			}
		}
		cin >> n >> q;
		string s;
		cin >> s;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			hsh[i+1][s[i]-'a']++;
		}

		// prefix sum calculation

		for(int j=0; j< 26; ++j){
			for (int i = 0; i < n; ++i)
			{
				/* code */
				hsh[i+1][j]+=hsh[i][j];
			}
		}
		while(q--){
			int l, r;
			cin >> l >> r;
			int oddCt = 0;
			for (int i = 0; i < 26; ++i)
			{
				/* code */
				int charCt = hsh[r][i]-hsh[l-1][i];
				if(charCt%2!=0){
					oddCt++;
				}
			}
			if(oddCt > 1) cout<< "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}