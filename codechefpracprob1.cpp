//https://www.codechef.com/problems/STONES


#include<bits/stdc++.h>
using namespace std;


int main(){

	int T;
	cin >> T;
	cin.ignore();


	while(T--){

		string j;
		getline(cin, j);

		string s;
		getline(cin, s);

		int count = 0;
		for(int i=0; i<s.size(); i++){
			
			int a=0;
			for(int k=0; k<j.size(); k++){

				if(s[i] == j[k]){
					a++;
					break;
				}
			}

			if(a>0)
				count++;
			
		}

		cout << count << endl;


	}
}