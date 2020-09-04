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
			n = (10*n + s[i] - '0') % 11;
		cout << (n == 0 ? 1 : 0) << endl;
	}
	return 0;
}

