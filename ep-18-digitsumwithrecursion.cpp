#include<bits/stdc++.h>
using namespace std;

int digitsum(int n){

	if(n/10 == 0){
		return n;
	}
	return n%10 + digitsum(n/10);
}
int main(int argc, char const *argv[])
{	
	int n;
	cin >> n;
	cout << digitsum(n);
	return 0;
}