#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		istringstream iss(s);
		string tmp; int cnt = 0;
		while(iss >> tmp)
			cnt++;
		cout << cnt << endl;
	}
	return 0;
}
