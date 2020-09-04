#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		int n = 0;
		for(int i=0; i<s.length(); i++)
			n = (2*n + s[i] - '0') % 5;
		cout << (n == 0 ? "Yes" : "No") << endl;
	}
	return 0;
}

