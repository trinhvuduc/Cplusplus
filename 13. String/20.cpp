#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--) {
		vector<string> v;
		string s;
		getline(cin, s);
		istringstream iss(s);
		string tmp;
		while(iss >> tmp)
			v.push_back(tmp);
		for(int i=v.size()-1; i>=0; i--)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}

