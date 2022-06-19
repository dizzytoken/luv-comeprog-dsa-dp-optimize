#include<bits/stdc++.h>
using namespace std;


int main(){
	map<int, string> m;
	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd";
	//s.size()*logn --> comparison occurs 
	// map has unique keys, values stored in sorted order of keys,
	// insertion and access time takes O(logn) time 
	m.insert({4, "afg"});
	for(auto it=m.begin(); it!=m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}
	auto itn = m.find(3); // returns iterator if value found, else m.end()

	// m.erase(iterator) --> deletes map element 
}