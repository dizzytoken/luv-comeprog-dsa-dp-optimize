/*
Given a string S of lower case alphabet of length N
and two integers L and R he wants to know whether all letters
of the substring from index L to R (L and R included)
can be arranged to form a palindrome or not. Q values of 
L and R


Constraints:

1<=t<=10
1<=N, Q<=100000
1<=L<=R<=N


Input : 

t
N Q 			|
S 				| t times 
L R  |Q times	|
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N][26];

int main(){
	int t;
	cin >> t;
	while(t--){
		for (int i = 0; i < N; ++i)
		{
			/* code */
			for (int j = 0; j < 26; ++j)
			{
				/* code */
				hsh [i][j] = 0;
			}
		}
		int n, q;
		cin >> n >> q;
		string s;
		cin >> s;
		for (int i = 0; i<n; ++i)
		{
			/* code */
			hsh[i+1][s[i]-'a']++;
		}
		for (int i = 0; i < 26; ++i)
		{
			/* code */
			for (int j = 1; j <=n; ++j)
			{
				/* code */
				hsh[j][i] += hsh[j-1][i];
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
				if(charCt%2 != 0) oddCt++;
			}
			if(oddCt > 1) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
}