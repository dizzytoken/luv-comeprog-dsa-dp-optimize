#include<bits/stdc++.h>
using namespace std;


int main()
{
	// vector<int> v ={2,3,5,6,7};
	// vector<int> :: iterator it = v.begin();
	// cout << endl;
	// for(int &value : v){ // value gets coped when we write int value : v
	// 	value ++ ;
	// 	cout << value << " ";
	// }
	// cout << endl;
	
	// // auto assumes automatic value 
 
	// for(auto it=v.begin(); it!=v.end(); ++it){
	// 	cout << (*it) << " ";
	// }
	// cout << endl;
	// return 0;

	vector<int> v;
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	for(auto it = v.begin(); it!= v.end(); ++it){
		cout << (*it) << " ";
	}
	cout << endl;
	for(auto &value :  v){
		cout << value << endl;
	}
}