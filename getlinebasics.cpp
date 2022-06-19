#include<bits/stdc++.h>
using namespace std;

int main(){

	int T;
	cin >> T;
	cin.ignore(); // ignores the nextline which will be read by getline as an input. 

	while(T--){

		string str;
		getline(cin, str);


		string str_reverse;

		for(int i=str.size()-1; i>=0; i--){
			str_reverse.push_back(str[i]);
		}

		if(str_reverse == str)
			cout << "Palindrome";
		else
			cout << " Not Palindrome" << endl;
		
	}
}


/*

string.push_back('a') is better than s = s + 'a' because in the first case 
the time complexity is 0(1) and in the second case it is O(n) cause it first 
makes a copy of the string then adds 'a' to it.


*/