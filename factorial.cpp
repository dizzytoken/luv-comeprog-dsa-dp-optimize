#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
// long long fact(int n){
// 	long long res=1;
// 	for(int i=1; i<= n; i++){
// 		res = (res*i) % M;
// 	}

// 	return res;

// }
const int N =1e5 + 10;
long long fact[N];

int main(){
	fact[0]=fact[1]=1;
	for(int i=2; i< N; i++){
		fact[i]=(fact[i-1]*i)%M;
	}
	int T;
	cin >> T;

	while(T--){
		int n;
		cin>>n;

		cout << fact[n] << endl;
	}
}