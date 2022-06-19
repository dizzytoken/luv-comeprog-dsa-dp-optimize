#include<bits/stdc++.h>
using namespace std;

int sum(int n, int arr[]){
	if(n<0){
		return 0;
	}
	return sum(n-1,arr) + arr[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
	}
	cout<< sum(n-1, a);
	return 0;
}