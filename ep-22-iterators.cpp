#include<bits/stdc++.h>
using namespace std;

/*

it++ moves to next iterator
it + 1 moves to next location

*/


int main()
{
	vector<int> v ={2,3,5,6,7};
	vector<int> :: iterator it = v.begin();

	for(it = v.begin(); it!=v.end(); ++it){
		cout << *it << " ";
	}

	cout << endl;

	vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
	vector<pair<int,int>>::iterator it_p;
	for(it_p = v_p.begin(); it_p!=v_p.end(); ++it_p){
		cout << (*it_p).first << " " << (*it_p).second << endl;
		// or (it->first) and (it->second); 
	}
	return 0;
}