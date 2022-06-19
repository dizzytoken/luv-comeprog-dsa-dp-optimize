#include<bits/stdc++.h>
using namespace std;


int main(){

	int T;
	cin >> T;

	while(T--){
		int N;
		cin >> N;
		int sum=0;
		while(N!=0){
			sum = sum + (N%10);
			N = N/10;
		}
		cout << sum << endl;
	}
