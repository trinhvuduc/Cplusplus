#include<bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		int res = 0;
		int c[26] = {0};
		for(int i=0; i<s.length(); i++) {
			c[s[i] - 'a']++; 
			res = max(res, c[s[i] - 'a']);
		}
		cout << (res < s.length() - res + 1) << endl;
	}
	return 0;
}

