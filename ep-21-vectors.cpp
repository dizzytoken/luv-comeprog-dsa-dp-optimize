// continuos memory blocks
// vectors are arrays with dynamic size 

/*
		vector<int> v(n, m) -- > declares a vector of size n in which
		all the elements are m

		v.push_back(int value) --> adds an element to the end of the vector

		v.pop_back() --> removes the last element of the vector

		we can also directly copy vectors

		vector<int> v2 = v; --> v2 is a copy of v o(n) complexity
		
		when we pass a vector to a function, if we need not make a copy, then 
		we should pass by reference as :    void printVec(vector<int> &v)
		
*/
#include<bits/stdc++.h>
using namespace std;


void printVec(vector<int> &v){
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout << v[i] << " ";
	}
	v.push_back(7);
}
int main(){
	vector<int> v;

	v.push_back(5);
	v.push_back(6);
	printVec(v); cout << endl;
	printVec(v);
}
