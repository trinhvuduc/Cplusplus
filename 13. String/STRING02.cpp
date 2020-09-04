// Dia chi email PTIT
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--) {
		char c[100];
		vector<string> v;
		cin.getline(c, 100);
		string str = "";
		for(int i=0; i<=strlen(c); i++) {
			if(c[i] == ' ' || c[i] == '\0') {
				v.push_back(str);
				str = "";
			}
			else {
				str += tolower(c[i]);
			}
		}
		cout << v.back();
		for(int i=0; i<v.size()-1; i++)
			cout << v[i][0];
		cout << "@ptit.edu.vn";
	}
	return 0;
}

