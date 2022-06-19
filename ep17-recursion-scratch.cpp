// a fucntion calls itself is called recursive function 

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n==1){
		return 1;
	}
	else{ 
		return n*fact(n-1);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << fact(n);
	return 0;
}