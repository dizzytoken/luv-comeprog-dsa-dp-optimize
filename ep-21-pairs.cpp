// pairs is a class in cpp which stores two values

#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int, string> p;

	p = make_pair(2,"abc"); // or p = {2, "abc"}
	cout <<p.first << " " << p.second << endl; 
	pair<int, int> parr[3];
	parr[0] = {1,2};
	parr[1] = {3,4};
	parr[2] = {5,6};

	for (int i = 0; i < 3; ++i)
	{
		cout << parr[i].first << " " << parr[i].second << endl;
	}
}