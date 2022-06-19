/*

select the least element in the given array
extract that element
do it for the rest of the array

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		int minindex = i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[j]<a[minindex]) minindex=j;
		}
		swap(a[i], a[minindex]);
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << a[i] << " ";
	}
}